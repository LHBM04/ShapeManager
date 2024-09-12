#pragma once

/// <summary>
/// 메뉴.
/// </summary>
class Menu {
private:
	/// <summary>
	/// 메뉴 이름.
	/// </summary>
	std::string				m_name;

	/// <summary>
	/// 메뉴 이벤트.
	/// </summary>
	std::function<void()>	m_event;

public:
	Menu(const std::string& _name, const std::function<void()>& _event) : m_name(_name), m_event(_event) {}
	Menu(const Menu& _other) : m_name(_other.m_name), m_event(_other.m_event) {}
	~Menu() {}

	/// <summary>
	/// 메뉴 이름을 가져옵니다.
	/// </summary>
	/// <returns>메뉴의 이름.</returns>
	const std::string& GetName() const;

	/// <summary>
	/// 메뉴 이벤트를 발생시킵니다.
	/// </summary>
	void Invoke() const;
};

/// <summary>
/// 메뉴 셀렉터.
/// </summary>
class MenuSelector final {
private:
	/// <summary>
	/// 기본 메뉴 개수.
	/// </summary>
	static const size_t DEFAULT_MENU_COUNT;

	/// <summary>
	/// 메뉴 선택 메세지.
	/// </summary>
	static const std::string SELECT_MENU_MESSAGE;

	/// <summary>
	/// 올바른 메뉴 선택 메세지.
	/// </summary>
	static const std::string SELECT_RIGHT_MENU_MESSAGE;

private:
	/// <summary>
	/// 관리할 메뉴들.
	/// </summary>
	const Menu* const*	m_menus;

	/// <summary>
	/// 관리하고 있는 메뉴들의 개수.
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
	/// 관리하고 있는 메뉴의 개수를 가져옵니다.
	/// </summary>
	/// <returns>관리하고 있는 메뉴의 개수.</returns>
	const size_t GetCount() const;

	/// <summary>
	/// 관리하고 있는 메뉴들을 띄웁니다.
	/// </summary>
	void Display() const;

	/// <summary>
	/// 메뉴를 선택합니다.
	/// </summary>
	void Select() const;
};

