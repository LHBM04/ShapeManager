#include "Quadrangle.h"

Quadrangle::Quadrangle(const Point& _first, const Point& _second) :
	m_vertex1(_first),
	m_vertex2(_first),
	m_vertex3(_first),
	m_vertex4(_first) {
}

Quadrangle::Quadrangle(const Point& _first, const Point& _second, const Point& third, const Point& _fourth) :
	m_vertex1(_first),
	m_vertex2(_second),
	m_vertex3(third),
	m_vertex4(_fourth) {
}

Quadrangle::Quadrangle(const Quadrangle& _other) :
	m_vertex1(_other.m_vertex1),
	m_vertex2(_other.m_vertex2),
	m_vertex3(_other.m_vertex3),
	m_vertex4(_other.m_vertex4) {
}

const double Quadrangle::GetSize() const {
	return 0.0;
}

void Quadrangle::Display() const {
}
