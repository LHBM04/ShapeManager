#include "Header.h"

TestScene1::TestScene1() : Scene("�׽�Ʈ 1") {
	const auto testMenu = new Menu("Scene �̵�", []() { SceneManager::GetInstance().LoadScene("�׽�Ʈ 2"); });
	const auto testMenu2 = new Menu("Quit", []() { exit(0); });

	this->menuSelector = new MenuSelector(testMenu, testMenu2);
}

TestScene1::~TestScene1() {
	delete this->menuSelector;
}

void TestScene1::Update() const {
	DrawUtility::WriteLine(this->GetName());

	if (menuSelector != nullptr) {
		menuSelector->Display();
		menuSelector->Select();
	}
}