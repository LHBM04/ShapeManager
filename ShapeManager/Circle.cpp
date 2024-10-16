#include "Circle.h"

Circle::Circle(const Point& _center, const Point& _end) : 
	m_center(_center), 
	m_end(_end) {
}

Circle::Circle(const Circle& _other) : 
	m_center(_other.m_center), 
	m_end(_other.m_end) {
}

Circle::~Circle() {
}

const double Circle::GetRadius() const {
	return sqrt(powl(this->m_end.GetX() - this->m_center.GetX(), 2) + powl(this->m_end.GetY() - this->m_center.GetY(), 2));
}

void Circle::Display() const {
	Console::WriteLine(std::format("중심: ({:.2f}, {:.2f}), 반지름: {:.2f}", this->m_center.GetX(), this->m_center.GetY(), this->GetRadius()));
}

const double Circle::GetSize() const {
	return sqrt(powl(this->m_end.GetX() - this->m_center.GetX(), 2) + powl(this->m_end.GetY() - this->m_center.GetY(), 2));
}
