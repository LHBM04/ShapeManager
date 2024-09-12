#include "Header.h"

const Delay Console::m_delay(10);

void Console::Write(const std::string& _text) {
	for (const auto& ch : _text) {
		std::cout << ch;
		std::this_thread::sleep_for(Console::m_delay);
	}
}

void Console::Write(const char* _text) {
	Console::Write(std::string(_text));
}

void Console::WriteLine(const std::string& _text, bool _shouldAlign) {
	for (const auto& ch : _text) {
		std::cout << ch;
		std::this_thread::sleep_for(m_delay);
	}

	if (_shouldAlign && *(--_text.end()) != '\n') {
		std::cout << std::endl;
	}
}

void Console::WriteLine(const char* _text, bool _shouldAlign) {
	Console::WriteLine(std::string(_text), _shouldAlign);
}

void Console::ClearScreen() {
	std::cout << "\x1B[2J\x1B[H";
}

void Console::ClearBufferC() {
	char c;
	while ((c = getchar()) != '\n' && c != EOF);
}

void Console::ClearBufferCPP() {
	std::cin.ignore();
}