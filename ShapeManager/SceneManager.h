#pragma once

/// <summary>
/// Scene�� �����ϴ� �Ŵ���.
/// </summary>
class SceneManager final : public Singleton<SceneManager> {
private:
	/// <summary>
	/// �����ϴ� Scene��.
	/// </summary>
	Scene**				m_scenes;

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
	void LoadScene(const std::string& _sceneName);

	/// <summary>
	/// Scene�� ��ε��մϴ�.
	/// </summary>
	void UnloadScene();
};
