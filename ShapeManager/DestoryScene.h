#pragma once

class DestroyScene final : public Scene {
public:
	DestroyScene();
	virtual ~DestroyScene() override;

public:
	// Scene을(를) 통해 상속됨
	virtual void Update() override;
};

