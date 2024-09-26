#pragma once

#include <atomic>
#include <chrono>
#include <functional>
#include <iostream>
#include <string>
#include <thread>

using Delay = std::chrono::milliseconds;

/// <summary>
/// 터미널 출력 유틸리티.
/// </summary>
class Console final {
public:
	/// <summary>
	/// 일정 시간을 간격으로 문장을 출력합니다.
	/// </summary>
	/// <param name="_text">출력할 문장.</param>
	static void Write(const std::string& _text, int _delay = 10.0f);

	/// <summary>
	/// 일정 시간을 간격으로 문장을 출력합니다.
	/// </summary>
	/// <param name="_text">출력할 문장.</param>
	static void Write(const char* _text, int _delay = 10.0f);

	/// <summary>
	/// 일정 시간을 간격으로 문장을 출력합니다. (뒤에 개행.)
	/// </summary>
	/// <param name="_text">출력할 문장.</param>
	/// <param name="_shouldAlign">개행이 필요한지에 대한 여부.(기본값: 참)</param>
	static void WriteLine(const std::string& _text, int _delay = 10);

	/// <summary>
	/// 일정 시간을 간격으로 문장을 출력합니다. (뒤에 개행.)
	/// </summary>
	/// <param name="_text">출력할 문장.</param>
	/// <param name="_shouldAlign">개행이 필요한지에 대한 여부.(기본값: 참)</param>
	static void WriteLine(const char* _text, bool _shouldAlign = true);

	/// <summary>
	/// 터미널 화면을 비웁니다.
	/// </summary>
	static void ClearScreen();

	/// <summary>
	/// 입력 버퍼를 비웁니다. (C 타입)
	/// </summary>
	static void ClearBufferC();

	/// <summary>
	/// 입력 버퍼를 비웁니다. (C++ 타입)
	/// </summary>
	static void ClearBufferCPP();

	/// <summary>
	/// 일정 시간 이후, 콜백을 실행합니다.
	/// </summary>
	/// <param name="_delay">대기 시간.</param>
	/// <param name="_callback">콜백.</param>
	static void WaitFor(Delay _delay, std::function<void()> _callback);

	static void WaitFor(std::function<void()> _event, std::function<void()> _callback = nullptr);

	/// <summary>
	/// 특정 이벤트 수행 후, 콜백을 실행합니다.
	/// </summary>
	/// <param name="_event">이벤트.</param>
	/// <param name="_callback">콜백.</param>
	static void WaitFor(std::function<bool()> _event, std::function<void()> _callback = nullptr);
};
