#pragma once

#include <format>

#include "Point.h"
#include "Shape.h"

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

	// Shape을(를) 통해 상속됨
	const double GetSize() const override;
};