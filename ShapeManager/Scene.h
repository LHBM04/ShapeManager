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
	/// Scene�� �̸�.
	/// </summary>
	std::string m_name{"???"};

	/// <summary>
	/// Scene�� ����.
	/// </summary>
	std::string	m_description{"???"};

	/// <summary>
	/// �ε� ����.
	/// </summary>
	bool m_isLoaded{ false };

public:
	Scene(const std::string& _name, const std::string& _description);
	Scene(const Scene& _other);
	virtual ~Scene();

public:
	/// <summary>
	/// Scene�� �̸��� �����ɴϴ�.
	/// </summary>
	/// <returns></returns>
	const std::string& GetName() const;

	/// <summary>
	/// Scene�� ������ �����ɴϴ�.
	/// </summary>
	const std::string& GetDescription() const;

	/// <summary>
	/// �ش� Scene�� Load ���θ� �����ɴϴ�.
	/// </summary>
	/// <returns></returns>
	const bool isLoaded() const;

	/// <summary>
	/// Scene�� �����մϴ�.
	/// </summary>
	void Enter();

	/// <summary>
	/// Scene���� �������ɴϴ�.
	/// </summary>
	void Exit();

	/// <summary>
	/// 
	/// </summary>
	virtual void Update() = 0;
};



