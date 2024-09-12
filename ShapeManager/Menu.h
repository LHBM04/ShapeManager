#pragma once

/// <summary>
/// �޴�.
/// </summary>
class Menu {
private:
	/// <summary>
	/// �޴� �̸�.
	/// </summary>
	std::string				m_name;

	/// <summary>
	/// �޴� �̺�Ʈ.
	/// </summary>
	std::function<void()>	m_event;

public:
	Menu(const std::string& _name, const std::function<void()>& _event) : m_name(_name), m_event(_event) {}
	Menu(const Menu& _other) : m_name(_other.m_name), m_event(_other.m_event) {}
	~Menu() {}

	/// <summary>
	/// �޴� �̸��� �����ɴϴ�.
	/// </summary>
	/// <returns>�޴��� �̸�.</returns>
	const std::string& GetName() const;

	/// <summary>
	/// �޴� �̺�Ʈ�� �߻���ŵ�ϴ�.
	/// </summary>
	void Invoke() const;
};

/// <summary>
/// �޴� ������.
/// </summary>
class MenuSelector final {
private:
	/// <summary>
	/// �⺻ �޴� ����.
	/// </summary>
	static const size_t DEFAULT_MENU_COUNT;

	/// <summary>
	/// �޴� ���� �޼���.
	/// </summary>
	static const std::string SELECT_MENU_MESSAGE;

	/// <summary>
	/// �ùٸ� �޴� ���� �޼���.
	/// </summary>
	static const std::string SELECT_RIGHT_MENU_MESSAGE;

private:
	/// <summary>
	/// ������ �޴���.
	/// </summary>
	const Menu* const*	m_menus;

	/// <summary>
	/// �����ϰ� �ִ� �޴����� ����.
	/// </summary>
	size_t				m_count;

public:
	template <typename... Args>
	MenuSelector(Args... _menus) {
		this->m_count = sizeof...(_menus);
		this->m_menus = new const Menu* const[]{_menus...};
	}
	~MenuSelector();

public:
	/// <summary>
	/// �����ϰ� �ִ� �޴��� ������ �����ɴϴ�.
	/// </summary>
	/// <returns>�����ϰ� �ִ� �޴��� ����.</returns>
	const size_t GetCount() const;

	/// <summary>
	/// �����ϰ� �ִ� �޴����� ���ϴ�.
	/// </summary>
	void Display() const;

	/// <summary>
	/// �޴��� �����մϴ�.
	/// </summary>
	void Select() const;
};

