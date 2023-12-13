#include "Header.h"

CreateScene::CreateScene() : Scene("���� �����", "���� ������ ������ ����ּ���.") {
	const auto createLine		= new Menu("����",		[]() { ShapeManager::GetInstance().InsertShape(ShapeGenerator::GenerateLine());			});
	const auto createCircle		= new Menu("����",		[]() { ShapeManager::GetInstance().InsertShape(ShapeGenerator::GenerateCircle());		});
	const auto createRectangle	= new Menu("�ﰢ��",		[]() { ShapeManager::GetInstance().InsertShape(ShapeGenerator::GenerateTriangle());		});
	const auto createTriangle	= new Menu("�簢��",		[]() { ShapeManager::GetInstance().InsertShape(ShapeGenerator::GenerateRectangle());	});
	const auto goBack			= new Menu("���ư���",	[]() { SceneManager::GetInstance().UnloadScene(); });

	m_menuSelector = new MenuSelector(createLine, createCircle, createRectangle, createTriangle, goBack);
}

CreateScene::~CreateScene() {
	delete this->m_menuSelector;
}

void CreateScene::Update() {
	if (this->m_menuSelector != nullptr) {
		this->m_menuSelector->Display();
		this->m_menuSelector->Select();
	}
}
