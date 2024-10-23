#include "Header.h"

TestScene2::TestScene2() : Scene("Å×½ºÆ® 2") {
	const auto testMenu2 = new Menu("Back", []() { SceneManager::GetInstance().UnloadScene(); });

	this->menuSelector = new MenuSelector(testMenu2);
}

TestScene2::~TestScene2() {
	delete this->menuSelector;
}

void TestScene2::Update() const {
	DrawUtility::WriteLine(this->GetName());

	if (menuSelector != nullptr) {
		menuSelector->Display();
		menuSelector->Select();
	}
}