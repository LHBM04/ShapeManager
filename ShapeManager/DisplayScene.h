#pragma once

class DisplayScene final : public Scene{
public:
	DisplayScene();
	virtual ~DisplayScene() override;

public:
	// Scene��(��) ���� ��ӵ�
	virtual void Update() override;
};

