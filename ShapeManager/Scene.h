#pragma once

class Scene abstract {
private:
	/// <summary>
	/// Scene의 기본 이름.
	/// </summary>
	const static std::string DEFAULT_SCENE_NAME;

private:
	/// <summary>
	/// Scene의 이름.
	/// </summary>
	std::string	m_name;

	/// <summary>
	/// 로드 여부.
	/// </summary>
	bool		m_isLoaded;

public:
	Scene();
	Scene(const std::string& _name);
	virtual ~Scene();

protected:
	/// <summary>
	/// Scene을 업데이트합니다.
	/// </summary>
	virtual void Update() const = 0;
	
public:
	/// <summary>
	/// Scene의 이름을 가져옵니다.
	/// </summary>
	/// <returns></returns>
	const std::string GetName() const;

	/// <summary>
	/// Scene에 진입합니다.
	/// </summary>
	void Enter();

	/// <summary>
	/// Scene에서 빠져나옵니다.
	/// </summary>
	void Exit();
};

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
	SceneManager(const SceneManager& _other) = delete;
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

