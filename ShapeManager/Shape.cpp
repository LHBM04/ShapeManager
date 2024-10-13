#include "Shape.h"

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

const Shape*& ShapeManager::operator[](const int index)
{
	// TODO: ���⿡ return ���� �����մϴ�.
}

const Shape*& ShapeManager::operator[](const std::function<const bool()> _predicate)
{
	// TODO: ���⿡ return ���� �����մϴ�.
}

void ShapeManager::Add(const Shape* const & _shape) {
	if (this->m_count >= this->m_size) {
		size_t	newSize = this->m_size * 2;
		auto	newArr	= new const Shape * [newSize] { nullptr };

		for (int index = 0; index < newSize; ++index) {
			newArr[index] = this->m_shapes[index];
		}

		delete this->m_shapes;

		this->m_shapes = newArr;
		this->m_size = newSize;
	}

	this->m_shapes[this->m_count++] = _shape;
}

void ShapeManager::Add(const Shape* const*& _shapes) {
}

void ShapeManager::Delete() {
	if (this->m_shapes == nullptr || 
		this->m_count <= 0) {
		return;
	}

	this->Display();

	unsigned int index = 0;
	while (true) {
		Console::Write("������ ������ �ε��� ��ȣ�� �Է����ּ���. ==> ");
		std::cin >> index;
		Console::ClearBufferCPP();

		if (index <= 0 || 
			index > this->m_count) {
			Console::WriteLine("�ùٸ� �ε����� �ƴմϴ�!");
			continue;
		}

		if (this->m_shapes[(index - 1)] != nullptr) {
			delete this->m_shapes[(index - 1)];

			Console::Write("�ش� ������ �����Ǿ����ϴ�! ����Ϸ��� �ƹ� Ű�� �����ּ���...");
			Console::WaitFor([]() { std::cin.get(); });
			return;
		}
		else {
			Console::WriteLine("�̹� ������ �����Դϴ�.");
			continue;
		}
	}
}

const bool ShapeManager::IsEmpty() const {
	return this->m_count <= 0 ? true : false;
}

const size_t ShapeManager::GetCount() const {
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
	else if (dynamic_cast<const Quadrangle*>(_shape) != nullptr) {
		return "�簢��";
	}
	else {
		return "???";
	}
}

void ShapeManager::Display() {
	for (int index = 0; index < this->m_count; ++index) {
		Console::WriteLine(std::format("[{:s}]", GetShapeType(this->m_shapes[index])));
	}
}