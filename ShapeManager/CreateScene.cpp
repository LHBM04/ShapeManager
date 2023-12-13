#include "Header.h"

CreateScene::CreateScene() : Scene("도형 만들기", "만들 도형의 종류를 골라주세요.") {
	const auto createLine		= new Menu("직선",		[]() { ShapeManager::GetInstance().InsertShape(ShapeGenerator::GenerateLine());			});
	const auto createCircle		= new Menu("원형",		[]() { ShapeManager::GetInstance().InsertShape(ShapeGenerator::GenerateCircle());		});
	const auto createRectangle	= new Menu("삼각형",		[]() { ShapeManager::GetInstance().InsertShape(ShapeGenerator::GenerateTriangle());		});
	const auto createTriangle	= new Menu("사각형",		[]() { ShapeManager::GetInstance().InsertShape(ShapeGenerator::GenerateRectangle());	});
	const auto goBack			= new Menu("돌아가기",	[]() { SceneManager::GetInstance().UnloadScene(); });

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
