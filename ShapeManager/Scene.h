#pragma once

/// <summary>
/// Scene.
/// </summary>
class Scene abstract {
private:
	/// <summary>
	/// Scene�� �⺻ �̸�.
	/// </summary>
	const static std::string DEFAULT_SCENE_NAME;

	/// <summary>
	/// Scene�� �⺻ ����.
	/// </summary>
	const static std::string DEFAULT_SCENE_DESCRIPTION;

private:
	/// <summary>
	/// Scene�� �̸�.
	/// </summary>
	std::string		m_name;

	/// <summary>
	/// Scene�� ����.
	/// </summary>
	std::string		m_description;

	/// <summary>
	/// �ε� ����.
	/// </summary>
	bool			m_isLoaded;

public:
	Scene();
	Scene(const std::string& _name, const std::string& _description);
	Scene(const Scene& _other) = delete;
	virtual ~Scene();

public:
	/// <summary>
	/// Scene�� �̸��� �����ɴϴ�.
	/// </summary>
	/// <returns></returns>
	const std::string GetName() const;

	/// <summary>
	/// Scene�� ������ �����ɴϴ�.
	/// </summary>
	const std::string GetDescription() const;

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



