#pragma once

class DestroyScene final : public Scene {
public:
	DestroyScene();
	virtual ~DestroyScene() override;

public:
	// Scene��(��) ���� ��ӵ�
	virtual void Update() override;
};

