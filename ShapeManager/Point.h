#pragma once

#include <limits>

/// <summary>
/// ��.
/// </summary>
class Point {
private:
	/// <summary>
	/// ������ ��.
	/// </summary>
	double m_x{ 0 };

	/// <summary>
	/// ���� ��.
	/// </summary>
	double m_y{ 0 };

public:
	Point() = delete;
	Point(const double& _right, const double& _left);
	Point(const Point& _other);
	~Point();

	const bool operator == (const Point& _other) const;
	const bool operator != (const Point& _other) const;

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