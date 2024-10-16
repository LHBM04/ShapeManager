#pragma once

#include <string>
#include <format>

#include "Console.h"

class SceneManager;

/// <summary>
/// Scene.
/// </summary>
class Scene abstract {
	friend SceneManager;

private:
	/// <summary>
	/// Scene의 이름.
	/// </summary>
	std::string m_name{"???"};

	/// <summary>
	/// Scene의 설명.
	/// </summary>
	std::string	m_description{"???"};

	/// <summary>
	/// 로드 여부.
	/// </summary>
	bool m_isLoaded{ false };

public:
	Scene(const std::string& _name, const std::string& _description);
	Scene(const Scene& _other);
	virtual ~Scene();

public:
	/// <summary>
	/// Scene의 이름을 가져옵니다.
	/// </summary>
	/// <returns></returns>
	const std::string& GetName() const;

	/// <summary>
	/// Scene의 설명을 가져옵니다.
	/// </summary>
	const std::string& GetDescription() const;

	/// <summary>
	/// 해당 Scene의 Load 여부를 가져옵니다.
	/// </summary>
	/// <returns></returns>
	const bool isLoaded() const;

	/// <summary>
	/// Scene에 진입합니다.
	/// </summary>
	void Enter();

	/// <summary>
	/// Scene에서 빠져나옵니다.
	/// </summary>
	void Exit();

	/// <summary>
	/// 
	/// </summary>
	virtual void Update() = 0;
};



