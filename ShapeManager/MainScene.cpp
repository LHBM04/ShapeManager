#include "Header.h"

MainScene::MainScene() : Scene("���� �޴�", "�� �ൿ�� �������ּ���.") {
	auto genrateShape	= new Menu("���� �����",		[]() { SceneManager::GetInstance().LoadScene("���� �����");		});
	auto displayShape	= new Menu("���� ����ϱ�",	[]() { SceneManager::GetInstance().LoadScene("���� ����ϱ�");	});
	auto destroyShape	= new Menu("���� �����ϱ�",	[]() { SceneManager::GetInstance().LoadScene("���� �����ϱ�");	});
	auto quitProgram	= new Menu("���α׷� ����",	[]() { exit(0);													});

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
