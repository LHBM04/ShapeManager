#include "Point.h"

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

const bool Point::operator==(const Point& _other) const {
    return (this->m_x - _other.m_y) <= std::numeric_limits<float>::epsilon() and
           (this->m_y - _other.m_y) <= std::numeric_limits<float>::epsilon();
}

const bool Point::operator!=(const Point& _other) const {
    return !((this->m_x - _other.m_y) <= std::numeric_limits<float>::epsilon() and
             (this->m_y - _other.m_y) <= std::numeric_limits<float>::epsilon());
}

const double& Point::GetX() const {
    return this->m_x;
}

const double& Point::GetY() const {
    return this->m_y;
}
