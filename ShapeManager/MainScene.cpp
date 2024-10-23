#include "Header.h"

MainScene::MainScene() : Scene("메인 메뉴", "할 행동을 선택해주세요.") {
	auto genrateShape	= new Menu("도형 만들기",		[]() { SceneManager::GetInstance().LoadScene("도형 만들기");		});
	auto displayShape	= new Menu("도형 출력하기",	[]() { SceneManager::GetInstance().LoadScene("도형 출력하기");	});
	auto destroyShape	= new Menu("도형 삭제하기",	[]() { SceneManager::GetInstance().LoadScene("도형 삭제하기");	});
	auto quitProgram	= new Menu("프로그램 종료",	[]() { exit(0);													});

	this->m_menuSelector = new MenuSelector(genrateShape, displayShape, destroyShape, quitProgram);
}

MainScene::~MainScene() {
	delete this->m_menuSelector;
	
}

void MainScene::Update() {
	if (this->m_menuSelector != nullptr) {
		this->m_menuSelector->Display();
		this->m_menuSelector->Select();
	}
}
