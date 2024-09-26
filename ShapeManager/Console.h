#pragma once

#include <atomic>
#include <chrono>
#include <functional>
#include <iostream>
#include <string>
#include <thread>

using Delay = std::chrono::milliseconds;

/// <summary>
/// �͹̳� ��� ��ƿ��Ƽ.
/// </summary>
class Console final {
public:
	/// <summary>
	/// ���� �ð��� �������� ������ ����մϴ�.
	/// </summary>
	/// <param name="_text">����� ����.</param>
	static void Write(const std::string& _text, int _delay = 10.0f);

	/// <summary>
	/// ���� �ð��� �������� ������ ����մϴ�.
	/// </summary>
	/// <param name="_text">����� ����.</param>
	static void Write(const char* _text, int _delay = 10.0f);

	/// <summary>
	/// ���� �ð��� �������� ������ ����մϴ�. (�ڿ� ����.)
	/// </summary>
	/// <param name="_text">����� ����.</param>
	/// <param name="_shouldAlign">������ �ʿ������� ���� ����.(�⺻��: ��)</param>
	static void WriteLine(const std::string& _text, int _delay = 10);

	/// <summary>
	/// ���� �ð��� �������� ������ ����մϴ�. (�ڿ� ����.)
	/// </summary>
	/// <param name="_text">����� ����.</param>
	/// <param name="_shouldAlign">������ �ʿ������� ���� ����.(�⺻��: ��)</param>
	static void WriteLine(const char* _text, bool _shouldAlign = true);

	/// <summary>
	/// �͹̳� ȭ���� ���ϴ�.
	/// </summary>
	static void ClearScreen();

	/// <summary>
	/// �Է� ���۸� ���ϴ�. (C Ÿ��)
	/// </summary>
	static void ClearBufferC();

	/// <summary>
	/// �Է� ���۸� ���ϴ�. (C++ Ÿ��)
	/// </summary>
	static void ClearBufferCPP();

	/// <summary>
	/// ���� �ð� ����, �ݹ��� �����մϴ�.
	/// </summary>
	/// <param name="_delay">��� �ð�.</param>
	/// <param name="_callback">�ݹ�.</param>
	static void WaitFor(Delay _delay, std::function<void()> _callback);

	static void WaitFor(std::function<void()> _event, std::function<void()> _callback = nullptr);

	/// <summary>
	/// Ư�� �̺�Ʈ ���� ��, �ݹ��� �����մϴ�.
	/// </summary>
	/// <param name="_event">�̺�Ʈ.</param>
	/// <param name="_callback">�ݹ�.</param>
	static void WaitFor(std::function<bool()> _event, std::function<void()> _callback = nullptr);
};
