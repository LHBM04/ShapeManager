#include "Header.h"

DestroyScene::DestroyScene() : Scene("도형 삭제하기", "어떤 도형을 삭제하시겠습니까?") {
}

DestroyScene::~DestroyScene() {
}

void DestroyScene::Update() {
	if (ShapeManager::GetInstance().IsEmpty()) {
		Console::WriteLine("현재 아무 도형도 들어 있지 않습니다!");
		Console::Write("이전으로 되돌아가려면 아무 키나 눌러주세요...");
		std::cin.get();

		SceneManager::GetInstance().UnloadScene();
	}

	ShapeManager::GetInstance().Delete();
	SceneManager::GetInstance().UnloadScene();
}
