#pragma once

#include <functional>
#include <string>

#include "Console.h"

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