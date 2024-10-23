#include "Header.h"

const std::string& Menu::GetName() const {
	return this->m_name;
}

void Menu::Invoke() const {
	if (this->m_event != nullptr) {
		this->m_event();
	}
}

const std::string MenuSelector::SELECT_MENU_MESSAGE = "메뉴를 골라주세요. ==> ";
const std::string MenuSelector::SELECT_RIGHT_MENU_MESSAGE = "올바른 메뉴를 골라주세요. ==> ";

MenuSelector::~MenuSelector() {
	for (int index = 0; index < this->m_count; ++index) {
		delete this->m_menus[index];
	}

	delete this->m_menus;
}

const size_t MenuSelector::GetCount() const {
	return this->m_count;
}

void MenuSelector::Display() const {
	for (int index = 0; index < this->m_count; ++index) {
		DrawUtility::WriteLine(std::format("[{:d}]. {:s}", index + 1, this->m_menus[index]->GetName()));
	}
}

void MenuSelector::Select() const {
	unsigned short action = 0;
	DrawUtility::Write(MenuSelector::SELECT_MENU_MESSAGE);
	while (true) {
		std::cin >> action;
		std::cin.ignore();

		if (action < 1 || action > this->m_count) {
			DrawUtility::Write(MenuSelector::SELECT_RIGHT_MENU_MESSAGE);
			continue;
		} else {
			if (this->m_menus[(action - 1)] != nullptr) {
				this->m_menus[(action - 1)]->Invoke();
				break;
			}
		}
	}
}
