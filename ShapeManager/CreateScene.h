#pragma once

class CreateScene final : public Scene {
private:
	MenuSelector* m_menuSelector;

public:
	CreateScene();
	virtual ~CreateScene() override;

public:
	// Scene��(��) ���� ��ӵ�
	void Update() override;
};

