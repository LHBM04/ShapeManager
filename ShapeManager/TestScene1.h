#pragma once

class TestScene1 final : public Scene {
private:
	MenuSelector* menuSelector;

protected:
	// Scene��(��) ���� ��ӵ�
	void Update() const override;

public:
	TestScene1();
	~TestScene1() override;
};

