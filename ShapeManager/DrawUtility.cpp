#include "Header.h"

const std::chrono::milliseconds DrawUtility::m_duration(10);

void DrawUtility::Write(const std::string& _text) {
	for (const auto& ch : _text) {
		std::cout << ch;
		std::this_thread::sleep_for(DrawUtility::m_duration);
	}
}

void DrawUtility::Write(const char* _text) {
	DrawUtility::Write(std::string(_text));
}

void DrawUtility::WriteLine(const std::string& _text, bool _isNeedAlign) {
	for (const auto& ch : _text) {
		std::cout << ch;
		std::this_thread::sleep_for(m_duration);
	}

	if (_isNeedAlign && *(--_text.end()) != '\n') {
		std::cout << std::endl;
	}
}

void DrawUtility::WriteLine(const char* _text, bool _isNeedAlign) {
	DrawUtility::WriteLine(std::string(_text), _isNeedAlign);
}
