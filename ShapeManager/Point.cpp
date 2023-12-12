#include "Header.h"

Point::Point() : m_x(0), m_y(0) {
}

Point::Point(const int _right, const int _left) : m_x(static_cast<const double>(_right)), m_y(static_cast<const double>(_left)) {
}

Point::Point(const double& _right, const double& _left) : m_x(_right), m_y(_left) {
}

Point::~Point() {
}

const double& Point::GetX() const {
	return this->m_x;
}

const double& Point::GetY() const {
	return this->m_y;
}
