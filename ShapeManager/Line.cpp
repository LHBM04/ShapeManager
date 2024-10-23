#include "Header.h"

Line::Line() : m_left(0, 0), m_right(0, 0) {
}

Line::Line(const Point& _left, const Point& _right) : m_left(_left), m_right(_right) {
}

Line::Line(const Line& _other) : m_left(_other.m_left), m_right(_other.m_right) {
}

Line::~Line() {
}

const int Line::GetLength() const {
	return sqrt(powl(this->m_left.GetX() - this->m_right.GetX(), 2) + powl(this->m_left.GetY() - this->m_right.GetY(), 2));
}

void Line::Display() const {
}
