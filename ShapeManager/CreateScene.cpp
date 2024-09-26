#include "Header.h"

CreateScene::~CreateScene() {
}

void CreateScene::Update() {
	if (!std::optional<MenuSelector>(this->m_menuSelector).has_value()) {
		return;
	}

	this->m_menuSelector.Display();
	this->m_menuSelector.Select();
}
