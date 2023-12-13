#pragma once

class CreateScene final : public Scene {
private:
	MenuSelector* m_menuSelector;

public:
	CreateScene();
	virtual ~CreateScene() override;

public:
	// Scene을(를) 통해 상속됨
	void Update() override;
};

