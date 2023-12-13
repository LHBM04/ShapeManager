#include "Header.h"

DisplayScene::DisplayScene() : Scene("도형 출력하기", "생성된 도형을 모두 출력합니다.")
{
}

DisplayScene::~DisplayScene() {

}

void DisplayScene::Update() {
	if (ShapeManager::GetInstance().IsEmpty()) {
		DrawUtility::WriteLine("현재 아무 도형도 들어 있지 않습니다!");
		DrawUtility::Write("이전으로 되돌아가려면 아무 키나 눌러주세요...");
		std::cin.get();

		SceneManager::GetInstance().UnloadScene();
	}

	ShapeManager::GetInstance().Display();
	std::cin.get();

	SceneManager::GetInstance().UnloadScene();
}
