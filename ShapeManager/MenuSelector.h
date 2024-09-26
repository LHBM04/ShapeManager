#pragma once

#include <string>
#include <format>

#include "Menu.h"

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
	const Menu* const* m_menus;

	/// <summary>
	/// �����ϰ� �ִ� �޴����� ����.
	/// </summary>
	size_t				m_count;

public:
	template <typename... Args>
	MenuSelector(Args... _menus) {
		this->m_count = sizeof...(_menus);
		this->m_menus = new const Menu* const [] {_menus...};
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

