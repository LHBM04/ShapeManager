#include "Header.h"

DestroyScene::DestroyScene() : Scene("���� �����ϱ�", "� ������ �����Ͻðڽ��ϱ�?") {
}

DestroyScene::~DestroyScene() {
}

void DestroyScene::Update() {
	if (ShapeManager::GetInstance().IsEmpty()) {
		Console::WriteLine("���� �ƹ� ������ ��� ���� �ʽ��ϴ�!");
		Console::Write("�������� �ǵ��ư����� �ƹ� Ű�� �����ּ���...");
		std::cin.get();

		SceneManager::GetInstance().UnloadScene();
	}

	ShapeManager::GetInstance().Delete();
	SceneManager::GetInstance().UnloadScene();
}
