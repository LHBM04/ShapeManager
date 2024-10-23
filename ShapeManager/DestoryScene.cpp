#include "Header.h"

DestroyScene::DestroyScene() : Scene("���� �����ϱ�", "� ������ �����Ͻðڽ��ϱ�?") {
}

DestroyScene::~DestroyScene() {
}

void DestroyScene::Update() {
	if (ShapeManager::GetInstance().IsEmpty()) {
		DrawUtility::WriteLine("���� �ƹ� ������ ��� ���� �ʽ��ϴ�!");
		DrawUtility::Write("�������� �ǵ��ư����� �ƹ� Ű�� �����ּ���...");
		std::cin.get();

		SceneManager::GetInstance().UnloadScene();
	}

	ShapeManager::GetInstance().DestroyShape();
	SceneManager::GetInstance().UnloadScene();
}
