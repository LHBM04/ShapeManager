#pragma once

/// <summary>
/// 그림 유틸리티.
/// </summary>
class DrawUtility final {
private:
	/// <summary>
	/// 대기 시간.
	/// </summary>
	static const std::chrono::milliseconds m_duration;

public:
	/// <summary>
	/// 일정 시간을 간격으로 문장을 출력합니다.
	/// </summary>
	/// <param name="_text">출력할 문장.</param>
	static void Write(const std::string& _text);

	/// <summary>
	/// 일정 시간을 간격으로 문장을 출력합니다.
	/// </summary>
	/// <param name="_text">출력할 문장.</param>
	static void Write(const char* _text);

	/// <summary>
	/// 일정 시간을 간격으로 문장을 출력합니다. (뒤에 개행.)
	/// </summary>
	/// <param name="_text">출력할 문장.</param>
	/// <param name="_isNeedAlign">개행이 필요한지에 대한 여부.(기본값: 참)</param>
	static void WriteLine(const std::string& _text, bool _isNeedAlign = true);

	/// <summary>
	/// 일정 시간을 간격으로 문장을 출력합니다. (뒤에 개행.)
	/// </summary>
	/// <param name="_text">출력할 문장.</param>
	/// <param name="_isNeedAlign">개행이 필요한지에 대한 여부.(기본값: 참)</param>
	static void WriteLine(const char* _text, bool _isNeedAlign = true);
};
