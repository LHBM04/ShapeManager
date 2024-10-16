#pragma once

#include <stack>
#include <string>

#include "Scene.h"
#include "Singleton.h"

/// <summary>
/// Scene�� �����ϴ� �Ŵ���.
/// </summary>
class SceneManager final : public Singleton<SceneManager> {
	friend Scene;
private:
	/// <summary>
	/// �����ϴ� Scene��.
	/// </summary>
	Scene**				m_scenes;

	/// <summary>
	/// 
	/// </summary>
	size_t				m_capacity;

	/// <summary>
	/// �����ϴ� Scene���� ����.
	/// </summary>
	size_t				m_count;

	/// <summary>
	/// ���� �����ִ� Scene.
	/// </summary>
	Scene*				m_currentScene;

	/// <summary>
	/// ������ �����ִ� Scene��.
	/// </summary>
	std::stack<Scene*>	m_previousScenes;

public:
	SceneManager();
	~SceneManager();

public:
	/// <summary>
	/// Scene�� �ε��մϴ�.
	/// </summary>
	/// <param name="_index"></param>
	void LoadScene(const size_t& _index);

	/// <summary>
	/// Scene�� �ε��մϴ�.
	/// </summary>
	void LoadScene(const std::string& _sceneName);

	/// <summary>
	/// Scene�� ��ε��մϴ�.
	/// </summary>
	void UnloadScene();
};
