#include "Console.h"

#include <format>
int main() {
	// SceneManager::GetInstance().LoadScene("메인 메뉴");
	Console::Write(std::format("안녕하세요.").c_str());
}