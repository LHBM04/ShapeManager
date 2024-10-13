#pragma once

#include <format>
#include <limits>

/// <summary>
/// ��.
/// </summary>
class Point {
private:
	/// <summary>
	/// ������ ��.
	/// </summary>
	double m_x;

	/// <summary>
	/// ���� ��.
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
	/// X ��ǥ�� �����ɴϴ�.
	/// </summary>
	/// <returns></returns>
	const double& GetX() const;

	/// <summary>
	/// Y ��ǥ�� �����ɴϴ�.
	/// </summary>
	/// <returns></returns>
	const double& GetY() const;
};