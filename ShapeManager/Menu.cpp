#include "Menu.h"

const std::string& Menu::GetName() const {
	return this->m_name;
}

void Menu::Invoke() const {
	if (this->m_event != nullptr) {
		this->m_event();
	}
}

