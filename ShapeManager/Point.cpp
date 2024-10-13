#include "Point.h"

Point::Point() :
    m_x(0.0),
    m_y(0.0) {
}

Point::Point(const int _right, const int _left) : 
    m_x(static_cast<double>(_right)),
    m_y(static_cast<double>(_left)) {
}

Point::Point(const double& _right, const double& _left) :
    m_x(_right),
    m_y(_left) {
}

Point::Point(const Point& _other) :
    m_x(_other.m_x),
    m_y(_other.m_y) {
}

Point::~Point() {
}

bool Point::operator==(const Point& _other) {
    return false;
}

bool Point::operator!=(const Point& _other) {
    return false;
}

const double& Point::GetX() const {
    return this->m_x;
}

const double& Point::GetY() const {
    return this->m_y;
}
