#include "Header.h"

DisplayScene::DisplayScene() : Scene("���� ����ϱ�", "������ ������ ��� ����մϴ�.")
{
}

DisplayScene::~DisplayScene() {

}

void DisplayScene::Update() {
	if (ShapeManager::GetInstance().IsEmpty()) {
		Console::WriteLine("���� �ƹ� ������ ��� ���� �ʽ��ϴ�!");
		Console::Write("�������� �ǵ��ư����� �ƹ� Ű�� �����ּ���...");
		
		std::cin.get();
		SceneManager::GetInstance().UnloadScene();
	}

	ShapeManager::GetInstance().Display();
	
	std::cin.get();
	SceneManager::GetInstance().UnloadScene();
}
