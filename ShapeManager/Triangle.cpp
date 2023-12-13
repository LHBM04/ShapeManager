#include "Header.h"

Triangle::Triangle() : m_vertex1(Point(0, 0)), m_vertex2(Point(0, 0)), m_vertex3(Point(0, 0)) {
}

Triangle::Triangle(const Point& _first, const Point& _second, const Point& _third) : m_vertex1(_first), m_vertex2(_second), m_vertex3(_third) {
}

Triangle::Triangle(const Triangle& _other) : m_vertex1(_other.m_vertex1), m_vertex2(_other.m_vertex2), m_vertex3(_other.m_vertex3) {
}

Triangle::~Triangle() {
}

void Triangle::Display() const {

}
