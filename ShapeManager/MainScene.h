#pragma once

class MainScene final : public Scene {
private:
	MenuSelector* menuSelector;

public:
	MainScene();
	MainScene(const MainScene& _other) = delete;
	~MainScene() override;

public:
	// Scene을(를) 통해 상속됨
	void Update() const override;
};

