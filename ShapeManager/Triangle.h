#pragma once

#include <format>

#include "Point.h"
#include "Shape.h"

class Triangle : public Shape {
private:
	Point m_vertex1;
	Point m_vertex2;
	Point m_vertex3;

public:
	Triangle(const Point& _first, const Point& _second, const Point& _third);
	Triangle(const Triangle& _other);

public:
	// Shape을(를) 통해 상속됨
	void Display() const override;

	// Shape을(를) 통해 상속됨
	const double GetSize() const override;
};