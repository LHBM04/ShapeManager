#pragma once

class DisplayScene final : public Scene{
public:
	DisplayScene();
	virtual ~DisplayScene() override;

public:
	// Scene을(를) 통해 상속됨
	virtual void Update() override;
};

