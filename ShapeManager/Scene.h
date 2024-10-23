#pragma once

class Scene abstract {
private:
	/// <summary>
	/// Scene�� �⺻ �̸�.
	/// </summary>
	const static std::string DEFAULT_SCENE_NAME;

private:
	/// <summary>
	/// Scene�� �̸�.
	/// </summary>
	std::string	m_name;

	/// <summary>
	/// �ε� ����.
	/// </summary>
	bool		m_isLoaded;

public:
	Scene();
	Scene(const std::string& _name);
	virtual ~Scene();

protected:
	/// <summary>
	/// Scene�� ������Ʈ�մϴ�.
	/// </summary>
	virtual void Update() const = 0;
	
public:
	/// <summary>
	/// Scene�� �̸��� �����ɴϴ�.
	/// </summary>
	/// <returns></returns>
	const std::string GetName() const;

	/// <summary>
	/// Scene�� �����մϴ�.
	/// </summary>
	void Enter();

	/// <summary>
	/// Scene���� �������ɴϴ�.
	/// </summary>
	void Exit();
};

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
	SceneManager(const SceneManager& _other) = delete;
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

