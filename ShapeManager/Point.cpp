#include "Shape.h"

/// <summary>
/// 점.
/// </summary>
class Point final {
private:
	/// <summary>
	/// 오른쪽 점.
	/// </summary>
	double m_x;

	/// <summary>
	/// 왼쪽 점.
	/// </summary>
	double m_y;

public:
	Point();
	Point(const int _right, const int _left);
	Point(const double& _right, const double& _left);
	Point(const Point& _other);
	~Point();

	bool operator == (const Point& _other);
	bool operator != (const Point& _other);

public:
	/// <summary>
	/// X 좌표를 가져옵니다.
	/// </summary>
	/// <returns></returns>
	const double& GetX() const;

	/// <summary>
	/// Y 좌표를 가져옵니다.
	/// </summary>
	/// <returns></returns>
	const double& GetY() const;
};


Point::Point() : m_x(0), m_y(0) {
}

Point::Point(const int _right, const int _left) : m_x(static_cast<const double>(_right)), m_y(static_cast<const double>(_left)) {
}

Point::Point(const double& _right, const double& _left) : m_x(_right), m_y(_left) {
}

Point::Point(const Point& _other) : m_x(_other.m_x), m_y(_other.m_y) {
}

Point::~Point() {
}

bool Point::operator==(const Point& _other) {
	return MathF::Equals(this->m_x, _other.m_x) && MathF::Equals(this->m_y, _other.m_y);
}

bool Point::operator!=(const Point& _other)
{
	return !(MathF::Equals(this->m_x, _other.m_x) && MathF::Equals(this->m_y, _other.m_y));
}

const double& Point::GetX() const {
	return this->m_x;
}

const double& Point::GetY() const {
	return this->m_y;
}
