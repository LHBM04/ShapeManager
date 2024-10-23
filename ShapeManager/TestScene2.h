#pragma once

class TestScene2 final : public Scene {
private:
	MenuSelector* menuSelector;

protected:
	// Scene을(를) 통해 상속됨
	void Update() const override;

public:
	TestScene2();
	~TestScene2() override;
};

