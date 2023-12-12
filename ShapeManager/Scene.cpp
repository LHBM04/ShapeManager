#include "Header.h"

const std::string Scene::DEFAULT_SCENE_NAME{ "???" };

Scene::Scene() : m_name(Scene::DEFAULT_SCENE_NAME), m_isLoaded(false) {
}

Scene::Scene(const std::string& _name) : m_name(_name), m_isLoaded(false) {
}

Scene::~Scene() {
}

const std::string Scene::GetName() const {
	return this->m_name;
}

void Scene::Enter() {
	this->m_isLoaded = true;

	while (this->m_isLoaded) {
		Update();
	}
}

void Scene::Exit() {
	this->m_isLoaded = false;
}

SceneManager::SceneManager() {
	const auto testScene1 = new TestScene1();
	const auto testScene2 = new TestScene2();

	this->m_count			= 2;
	this->m_scenes			= new Scene*[this->m_count]{ testScene1, testScene2 };
	this->m_previousScenes	= std::stack<Scene*>();
	this->m_currentScene	= nullptr;
}

SceneManager::~SceneManager() {
	for (int index = 0; index < this->m_count; ++index) {
		delete this->m_scenes[index];
	}

	delete[] this->m_scenes;
}

void SceneManager::LoadScene(const std::string& _sceneName) {
	for (int index = 0; index < this->m_count; ++index) {
		if (this->m_scenes[index]->GetName() == _sceneName) {
			if (this->m_currentScene != nullptr) {
				this->m_currentScene->Exit();
				this->m_previousScenes.push(m_currentScene);
			}

			this->m_currentScene = this->m_scenes[index];
			this->m_currentScene->Enter();
		}
	}

}

void SceneManager::UnloadScene() {
	if (this->m_currentScene == nullptr) {
		return;
	}

	this->m_currentScene->Exit();
	this->m_previousScenes.top()->Enter();
	this->m_previousScenes.pop();
}
