#include "Header.h"

SceneManager::SceneManager() {
	const auto mainScene	= new MainScene();
	const auto createScene	= new CreateScene();
	const auto displayScene = new DisplayScene();
	const auto destroyScene = new DestroyScene();

	this->m_count			= 4;
	this->m_scenes			= new Scene * [this->m_count] { mainScene, createScene, displayScene, destroyScene };
	this->m_currentScene	= nullptr;
}

SceneManager::~SceneManager() {
	for (int index = 0; index < this->m_count; ++index) {
		delete this->m_scenes[index];
	}

	delete[] this->m_scenes;

	if (!this->m_previousScenes.empty()) {
		const auto ptr = this->m_previousScenes.top();
		delete ptr;            
		this->m_previousScenes.pop();
	}
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

			return;
		}
	}
}

void SceneManager::UnloadScene() {
	if (this->m_currentScene == nullptr) {
		return;
	}

	this->m_currentScene->Exit();
	this->LoadScene(this->m_previousScenes.top()->GetName());
	this->m_currentScene->Enter();
	this->m_previousScenes.pop();
}
