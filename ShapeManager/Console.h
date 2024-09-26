#pragma once

#include <atomic>
#include <chrono>
#include <functional>
#include <iostream>
#include <string>
#include <thread>

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
};
