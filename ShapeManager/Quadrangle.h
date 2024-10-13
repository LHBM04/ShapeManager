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
	Quadrangle();
	Quadrangle(const Point& _first, const Point& _second);
	Quadrangle(const Point& _first, const Point& _second, const Point& third, const Point& _fourth);
	Quadrangle(const Quadrangle& _other);
	virtual ~Quadrangle() override;

public:
	const double GetArea() const;
	// Shape��(��) ���� ��ӵ�
	void Display() const override;
};