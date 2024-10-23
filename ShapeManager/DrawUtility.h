#pragma once

/// <summary>
/// �׸� ��ƿ��Ƽ.
/// </summary>
class DrawUtility final {
private:
	/// <summary>
	/// ��� �ð�.
	/// </summary>
	static const std::chrono::milliseconds m_duration;

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
	/// <param name="_isNeedAlign">������ �ʿ������� ���� ����.(�⺻��: ��)</param>
	static void WriteLine(const std::string& _text, bool _isNeedAlign = true);

	/// <summary>
	/// ���� �ð��� �������� ������ ����մϴ�. (�ڿ� ����.)
	/// </summary>
	/// <param name="_text">����� ����.</param>
	/// <param name="_isNeedAlign">������ �ʿ������� ���� ����.(�⺻��: ��)</param>
	static void WriteLine(const char* _text, bool _isNeedAlign = true);
};
