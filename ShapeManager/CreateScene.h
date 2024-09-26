#pragma once

class CreateScene final : public Scene {
private:
	MenuSelector m_menuSelector;

public:
	CreateScene() : Scene("���� �����", "���� ������ ������ ����ּ���.") {
		const auto createLine = new Menu("����", []() { ShapeManager::GetInstance().Insert(ShapeGenerator::GenerateLine());			});
		const auto createCircle = new Menu("����", []() { ShapeManager::GetInstance().Insert(ShapeGenerator::GenerateCircle());		});
		const auto createRectangle = new Menu("�ﰢ��", []() { ShapeManager::GetInstance().Insert(ShapeGenerator::GenerateTriangle());		});
		const auto createTriangle = new Menu("�簢��", []() { ShapeManager::GetInstance().Insert(ShapeGenerator::GenerateRectangle());	});
		const auto goBack = new Menu("���ư���", []() { SceneManager::GetInstance().UnloadScene(); });

		m_menuSelector = MenuSelector(createLine, createCircle, createRectangle, createTriangle, goBack);
	}
	virtual ~CreateScene() override;

public:
	// Scene��(��) ���� ��ӵ�
	void Update() override;
};

