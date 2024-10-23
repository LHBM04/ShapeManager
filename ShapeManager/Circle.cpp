#include "Header.h"

Circle::Circle() : m_center(Point(0, 0)), m_end(Point(0, 0)) {
}

Circle::Circle(const Point& _center, const Point& _end) : m_center(_center), m_end(_end) {
}

Circle::~Circle() {
}

const double Circle::GetRadius() const {
	return sqrt(powl(this->m_end.GetX() - this->m_center.GetX(), 2) + powl(this->m_end.GetY() - this->m_center.GetY(), 2));
}

void Circle::Display() const {
	DrawUtility::WriteLine(std::format("중심: ({:.2f}, {:.2f}), 반지름: {:.2f}", this->m_center.GetX(), this->m_center.GetY(), this->GetRadius()));
}
