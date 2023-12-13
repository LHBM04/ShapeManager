#include "Header.h"

Rectangle::Rectangle() : m_vertex1(Point(0, 0)), m_vertex2(Point(0, 0)), m_vertex3(Point(0, 0)), m_vertex4(Point(0, 0))
{
}

Rectangle::Rectangle(const Point& _first, const Point& _second) : m_vertex1(_first), 
																  m_vertex2(Point(_first.GetX(), _second.GetY())),
																  m_vertex3(_second), 
																  m_vertex4(Point(_second.GetX(), _first.GetY())) {
}

Rectangle::Rectangle(const Point& _first, const Point& _second, const Point& _third, const Point& _fourth) : m_vertex1(_first),
																											 m_vertex2(_second),
																											 m_vertex3(_third),
																											 m_vertex4(_fourth) {
}

Rectangle::Rectangle(const Rectangle& _other) : m_vertex1(_other.m_vertex1),
												m_vertex2(_other.m_vertex2),
												m_vertex3(_other.m_vertex3),
												m_vertex4(_other.m_vertex4) {
}

Rectangle::~Rectangle() {
}

const double Rectangle::GetArea() const {
	// 부호제거(x2-x1)제곱 + 부호제거(y2-y1)제곱
	return abs(powl(this->m_vertex3.GetX() - this->m_vertex1.GetX(), 2) + powl(this->m_vertex3.GetY() - this->m_vertex1.GetY(), 2));
}

void Rectangle::Display() const {
	DrawUtility::WriteLine(std::format("아래 대각선: ({:f} {:f}), 윗 대각선: ({:f} {:f})", this->m_vertex1.GetX(), this->m_vertex1.GetY(),
																						this->m_vertex3.GetX(), this->m_vertex3.GetY()));
}
