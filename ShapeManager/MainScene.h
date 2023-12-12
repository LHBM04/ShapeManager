#pragma once

class MainScene final : public Scene {
private:
	MenuSelector* menuSelector;

public:
	MainScene();
	MainScene(const MainScene& _other) = delete;
	~MainScene() override;

public:
	// Scene��(��) ���� ��ӵ�
	void Update() const override;
};

