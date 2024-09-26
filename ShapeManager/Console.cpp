#include "Console.h"

void Console::Write(const std::string& _text, int _delay) {
	for (const char& ch : _text) {
		std::cout << ch;
		std::this_thread::sleep_for(std::chrono::milliseconds(_delay));
	}
}

void Console::Write(const char* _text, int _delay) {
	for (auto ch = _text; ++ch != nullptr;) {
		std::cout << ch;
		std::this_thread::sleep_for(std::chrono::milliseconds(_delay));
	}

	//Console::Write(std::string(_text));
}

void Console::WriteLine(const std::string& _text, int _delay) {
	for (const char& ch : _text) {
		std::cout << ch;
		std::this_thread::sleep_for(std::chrono::milliseconds(_delay));
	}

	if (*(--_text.end()) != '\n') {
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
