#pragma once

class CreateScene final : public Scene {
private:
	MenuSelector m_menuSelector;

public:
	CreateScene() : Scene("도형 만들기", "만들 도형의 종류를 골라주세요.") {
		const auto createLine = new Menu("직선", []() { ShapeManager::GetInstance().Insert(ShapeGenerator::GenerateLine());			});
		const auto createCircle = new Menu("원형", []() { ShapeManager::GetInstance().Insert(ShapeGenerator::GenerateCircle());		});
		const auto createRectangle = new Menu("삼각형", []() { ShapeManager::GetInstance().Insert(ShapeGenerator::GenerateTriangle());		});
		const auto createTriangle = new Menu("사각형", []() { ShapeManager::GetInstance().Insert(ShapeGenerator::GenerateRectangle());	});
		const auto goBack = new Menu("돌아가기", []() { SceneManager::GetInstance().UnloadScene(); });

		m_menuSelector = MenuSelector(createLine, createCircle, createRectangle, createTriangle, goBack);
	}
	virtual ~CreateScene() override;

public:
	// Scene을(를) 통해 상속됨
	void Update() override;
};

