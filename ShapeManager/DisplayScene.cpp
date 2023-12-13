#include "Header.h"

DisplayScene::DisplayScene() : Scene("���� ����ϱ�", "������ ������ ��� ����մϴ�.")
{
}

DisplayScene::~DisplayScene() {

}

void DisplayScene::Update() {
	if (ShapeManager::GetInstance().IsEmpty()) {
		DrawUtility::WriteLine("���� �ƹ� ������ ��� ���� �ʽ��ϴ�!");
		DrawUtility::Write("�������� �ǵ��ư����� �ƹ� Ű�� �����ּ���...");
		std::cin.get();

		SceneManager::GetInstance().UnloadScene();
	}

	ShapeManager::GetInstance().Display();
	std::cin.get();

	SceneManager::GetInstance().UnloadScene();
}
