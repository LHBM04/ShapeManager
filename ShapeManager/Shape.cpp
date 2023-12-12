#include "Header.h"

const size_t ShapeManager::DEFAULT_SIZE{ 10 };

ShapeManager::ShapeManager() : m_count(0), m_size(ShapeManager::DEFAULT_SIZE) {
	m_shapes = new const Shape * [m_size] { nullptr };
}

ShapeManager::ShapeManager(const size_t& _size) : m_count(0), m_size(_size) {
	m_shapes = new const Shape*[m_size]{ nullptr };
}

ShapeManager::~ShapeManager() {
	for (int index = 0; index < this->m_count; ++index) {
		delete this->m_shapes[index];
	}

	delete[] this->m_shapes;
}

void ShapeManager::AddShape(const Shape* _shape) {
	if (this->m_count >= this->m_size) {
		size_t			newSize = this->m_size * 2;
		const Shape**	newArr	= new const Shape*[newSize]{ nullptr };

		for (int index = 0; index < newSize; ++index) {
			newArr[index] = this->m_shapes[index];
		}

		delete this->m_shapes;
		this->m_shapes	= newArr;
		this->m_size	= newSize;
	}

	this->m_shapes[this->m_count++] = _shape;
}

const std::string ShapeManager::GetShapeType(const Shape*& _shape) {
	if (dynamic_cast<const Line*>(_shape) != nullptr) {
		return "직선";
	} else if (dynamic_cast<const Circle*>(_shape) != nullptr) {
		return "원형";
	} else if (dynamic_cast<const Triangle*>(_shape) != nullptr) {
		return "삼각형";
	} else if (dynamic_cast<const Rectangle*>(_shape) != nullptr) {
		return "사각형";
	} else {
		return "???";
	}
}

void ShapeManager::Display()  {
	for (int index = 0; index < this->m_count; ++index) {
		DrawUtility::WriteLine(std::format("[{:s}]", GetShapeType(this->m_shapes[index])));
	}
}
