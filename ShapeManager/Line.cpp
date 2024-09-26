#include "Header.h"

Line::Line() : m_y(0, 0), m_x(0, 0) {
}

Line::Line(const Point& _left, const Point& _right) : m_y(_left), m_x(_right) {
}

Line::Line(const Line& _other) : m_y(_other.m_y), m_x(_other.m_x) {
}

Line::~Line() {
}

const int Line::GetLength() const {
	return sqrt(powl(this->m_y.GetX() - this->m_x.GetX(), 2) + powl(this->m_y.GetY() - this->m_x.GetY(), 2));
}

void Line::Display() const {
}
