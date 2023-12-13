#pragma once

/// <summary>
/// Scene을 관리하는 매니저.
/// </summary>
class SceneManager final : public Singleton<SceneManager> {
private:
	/// <summary>
	/// 관리하는 Scene들.
	/// </summary>
	Scene**				m_scenes;

	/// <summary>
	/// 관리하는 Scene들의 개수.
	/// </summary>
	size_t				m_count;

	/// <summary>
	/// 현재 열려있는 Scene.
	/// </summary>
	Scene*				m_currentScene;

	/// <summary>
	/// 이전에 열려있던 Scene들.
	/// </summary>
	std::stack<Scene*>	m_previousScenes;

public:
	SceneManager();
	~SceneManager();

public:
	/// <summary>
	/// Scene을 로드합니다.
	/// </summary>
	void LoadScene(const std::string& _sceneName);

	/// <summary>
	/// Scene을 언로드합니다.
	/// </summary>
	void UnloadScene();
};
