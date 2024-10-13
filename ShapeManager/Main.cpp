#include <format>
#include "Console.h"

int main() {
	Console::Write(std::format("안녕하세요.").c_str());
}