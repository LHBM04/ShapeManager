#pragma once

class MainScene final : public Scene {
private:
	MenuSelector* m_menuSelector;

public:
	MainScene();
	virtual ~MainScene() override;

	// Scene��(��) ���� ��ӵ�
	void Update() override;
};

