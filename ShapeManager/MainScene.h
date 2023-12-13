#pragma once

class MainScene final : public Scene {
private:
	MenuSelector* m_menuSelector;

public:
	MainScene();
	virtual ~MainScene() override;

	// Scene을(를) 통해 상속됨
	void Update() override;
};

