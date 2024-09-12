#include "Header.h"

const std::string Scene::DEFAULT_SCENE_NAME{ "???" };
const std::string Scene::DEFAULT_SCENE_DESCRIPTION{ "Scene의 설명을 써주세요." };

Scene::Scene() : m_name(Scene::DEFAULT_SCENE_NAME), m_description(Scene::DEFAULT_SCENE_DESCRIPTION), m_isLoaded(false) {
}

Scene::Scene(const std::string& _name, const std::string& _description) : m_name(_name), m_description(_description), m_isLoaded(false) {
}

Scene::~Scene() {
}

const std::string Scene::GetName() const {
	return this->m_name;
}

const std::string Scene::GetDescription() const {
	return this->m_description;
}

const bool Scene::isLoaded() const {
	return this->m_isLoaded;
}

void Scene::Enter() {
	this->m_isLoaded = true;

	// Update Routine.
	while (this->m_isLoaded) {
		Console::ClearScreen();
		Console::WriteLine(std::format("[{:s}]", this->GetName()));
		Console::WriteLine(std::format("({:s})", this->GetDescription()));
		this->Update();
	}
}

void Scene::Exit() {
	this->m_isLoaded = false;
}
