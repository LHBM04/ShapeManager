#include "Console.h"

#include <format>
int main() {
	// SceneManager::GetInstance().LoadScene("���� �޴�");
	Console::Write(std::format("�ȳ��ϼ���.").c_str());
}