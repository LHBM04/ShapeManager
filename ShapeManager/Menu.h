#pragma once

#include <functional>
#include <string>

#include "Console.h"

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