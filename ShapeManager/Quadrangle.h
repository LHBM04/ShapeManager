#pragma once

#include <format>

#include "Point.cpp"
#include "Shape.h"

class Quadrangle : public Shape {
private:
	/// <summary>
	/// ù��° ������.
	/// </summary>
	Point m_vertex1;

	/// <summary>
	/// �ι�° ������.
	/// </summary>
	Point m_vertex2;

	/// <summary>
	/// ����° ������.
	/// </summary>
	Point m_vertex3;

	/// <summary>
	/// �׹�° ������.
	/// </summary>
	Point m_vertex4;

public:
	Quadrangle(const Point& _first, const Point& _second);
	Quadrangle(const Point& _first, const Point& _second, const Point& third, const Point& _fourth);
	Quadrangle(const Quadrangle& _other);

public:
	// Shape��(��) ���� ��ӵ�
	const double GetSize() const override;

	// Shape��(��) ���� ��ӵ�
	void Display() const override;
};