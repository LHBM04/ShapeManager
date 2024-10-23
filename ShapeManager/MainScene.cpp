#include "Header.h"

MainScene::MainScene() : Scene("메인 메뉴") {
	auto testMenu = new Menu("Test1", []() { DrawUtility::WriteLine("Hello"); });
	auto testMenu2 = new Menu("Quit", [this]() { this->Exit(); });

	this->menuSelector = new MenuSelector(testMenu, testMenu2);
}

MainScene::~MainScene() {
	delete this->menuSelector;
}

void MainScene::Update() const {
	DrawUtility::WriteLine(this->GetName());
	
	if (menuSelector != nullptr) {
		menuSelector->Display();
		menuSelector->Select();
	}
}
