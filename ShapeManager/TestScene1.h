#pragma once

class TestScene1 final : public Scene {
private:
	MenuSelector* menuSelector;

protected:
	// Scene을(를) 통해 상속됨
	void Update() const override;

public:
	TestScene1();
	~TestScene1() override;
};

