#pragma once

#include <format>

#include "Point.cpp"
#include "Shape.h"

class Quadrangle : public Shape {
private:
	/// <summary>
	/// Ã¹¹øÂ° ²ÀÁþÁ¡.
	/// </summary>
	Point m_vertex1;

	/// <summary>
	/// µÎ¹øÂ° ²ÀÁþÁ¡.
	/// </summary>
	Point m_vertex2;

	/// <summary>
	/// ¼¼¹øÂ° ²ÀÁþÁ¡.
	/// </summary>
	Point m_vertex3;

	/// <summary>
	/// ³×¹øÂ° ²ÀÁþÁ¡.
	/// </summary>
	Point m_vertex4;

public:
	Quadrangle(const Point& _first, const Point& _second);
	Quadrangle(const Point& _first, const Point& _second, const Point& third, const Point& _fourth);
	Quadrangle(const Quadrangle& _other);

public:
	// ShapeÀ»(¸¦) ÅëÇØ »ó¼ÓµÊ
	const double GetSize() const override;

	// ShapeÀ»(¸¦) ÅëÇØ »ó¼ÓµÊ
	void Display() const override;
};