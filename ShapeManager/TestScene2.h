#pragma once

class TestScene2 final : public Scene {
private:
	MenuSelector* menuSelector;

protected:
	// Scene��(��) ���� ��ӵ�
	void Update() const override;

public:
	TestScene2();
	~TestScene2() override;
};

