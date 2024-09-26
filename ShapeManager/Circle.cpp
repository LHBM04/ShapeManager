#include "Shape.h"
#include "Point.cpp"

/// <summary>
/// 원.
/// </summary>
class Circle : public Shape {
private:
	/// <summary>
	/// 중심점.
	/// </summary>
	Point m_center;

	/// <summary>
	/// 끝점
	/// </summary>
	Point m_end;

public:
	Circle();
	Circle(const Point& _center, const Point& _end);
	Circle(const Circle& _other);
	virtual ~Circle() override;

	/// <summary>
	/// 해당 원의 반지름을 가져옵니다.
	/// </summary>
	/// <returns>원의 반지름.</returns>
	const double GetRadius() const;

	// Shape을(를) 통해 상속됨
	void Display() const override;
};

Circle::Circle() : 
	m_center(Point(0, 0)), 
	m_end(Point(0, 0)) {
}

Circle::Circle(const Point& _center, const Point& _end) : 
	m_center(_center), 
	m_end(_end) {
}

Circle::Circle(const Circle& _other) : 
	m_center(_other.m_center), 
	m_end(_other.m_end) {
}

Circle::~Circle() {
}

const double Circle::GetRadius() const {
	return sqrt(powl(this->m_end.GetX() - this->m_center.GetX(), 2) + powl(this->m_end.GetY() - this->m_center.GetY(), 2));
}

void Circle::Display() const {
	Console::WriteLine(std::format("중심: ({:.2f}, {:.2f}), 반지름: {:.2f}", this->m_center.GetX(), this->m_center.GetY(), this->GetRadius()));
}
