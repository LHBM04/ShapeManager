#pragma once

using Delay = std::chrono::milliseconds;

/// <summary>
/// �׸� ��ƿ��Ƽ.
/// </summary>
class Console final {
private:
	/// <summary>
	/// ��� �ð�.
	/// </summary>
	static const Delay m_delay;

public:
	/// <summary>
	/// ���� �ð��� �������� ������ ����մϴ�.
	/// </summary>
	/// <param name="_text">����� ����.</param>
	static void Write(const std::string& _text);

	/// <summary>
	/// ���� �ð��� �������� ������ ����մϴ�.
	/// </summary>
	/// <param name="_text">����� ����.</param>
	static void Write(const char* _text);

	/// <summary>
	/// ���� �ð��� �������� ������ ����մϴ�. (�ڿ� ����.)
	/// </summary>
	/// <param name="_text">����� ����.</param>
	/// <param name="_shouldAlign">������ �ʿ������� ���� ����.(�⺻��: ��)</param>
	static void WriteLine(const std::string& _text, bool _shouldAlign = true);

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

	static void WaitFor(Delay _delay, std::function<void()> _callback);

	static void WaitFor(std::function<bool()> _predicate, std::function<void()> _callback);
};
