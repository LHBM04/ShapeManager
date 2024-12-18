#include "Header.h"

const size_t ShapeManager::DEFAULT_SHAPE_COUNT{ 10 };

ShapeManager::ShapeManager() : m_count(0), m_size(ShapeManager::DEFAULT_SHAPE_COUNT) {
	m_shapes = new const Shape * [m_size] { nullptr };
}

ShapeManager::ShapeManager(const size_t& _size) : m_count(0), m_size(_size) {
	m_shapes = new const Shape * [m_size] { nullptr };
}

ShapeManager::~ShapeManager() {
	for (int index = 0; index < this->m_count; ++index) {
		delete this->m_shapes[index];
	}

	delete[] this->m_shapes;
}

void ShapeManager::InsertShape(const Shape* _shape) {
	if (this->m_count >= this->m_size) {
		size_t			newSize = this->m_size * 2;
		const Shape**	newArr	= new const Shape * [newSize] { nullptr };

		for (int index = 0; index < newSize; ++index) {
			newArr[index] = this->m_shapes[index];
		}

		delete this->m_shapes;
		this->m_shapes = newArr;
		this->m_size = newSize;
	}

	this->m_shapes[this->m_count++] = _shape;
}

void ShapeManager::DestroyShape() {
	if (this->m_shapes == nullptr || this->m_count <= 0) {
		return;
	}

	this->Display();

	size_t index = 0;
	while (true) {
		DrawUtility::Write("������ ������ �ε��� ��ȣ�� �Է����ּ���. ==> ");
		std::cin >> index;
		DrawUtility::ClearBufferCPP();

		if (index > this->m_count) {
			DrawUtility::WriteLine("�ùٸ� �ε����� �ƴմϴ�!");
			continue;
		}

		if (this->m_shapes[index] != nullptr) {
			delete this->m_shapes[index];
			this->m_shapes[index] = nullptr;

			for (size_t i = index; i < this->m_count - 1; ++i) {
				this->m_shapes[i] = this->m_shapes[i + 1];
			}

			this->m_shapes[this->m_count--] = nullptr;
			DrawUtility::Write("�ش� ������ �����Ǿ����ϴ�! ����Ϸ��� �ƹ� Ű�� �����ּ���...");
			std::cin.get();
			return;
		} else {
			DrawUtility::WriteLine("�̹� ������ �����Դϴ�.");
			continue;
		}
	}
}

const bool ShapeManager::IsEmpty() const {
	return this->m_count <= 0 ? true : false;
}

const size_t ShapeManager::GetShapesCount() const {
	return this->m_count;
}

const std::string ShapeManager::GetShapeType(const Shape*& _shape) {
	if (dynamic_cast<const Line*>(_shape) != nullptr) {
		return "����";
	}
	else if (dynamic_cast<const Circle*>(_shape) != nullptr) {
		return "����";
	}
	else if (dynamic_cast<const Triangle*>(_shape) != nullptr) {
		return "�ﰢ��";
	}
	else if (dynamic_cast<const Rectangle*>(_shape) != nullptr) {
		return "�簢��";
	}
	else {
		return "???";
	}
}

void ShapeManager::Display() {
	for (int index = 0; index < this->m_count; ++index) {
		DrawUtility::WriteLine(std::format("[{:s}]", GetShapeType(this->m_shapes[index])));
	}
}
