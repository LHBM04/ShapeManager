#pragma once

#include <limits>

/// <summary>
/// 점.
/// </summary>
class Point {
private:
	/// <summary>
	/// 오른쪽 점.
	/// </summary>
	double m_x{ 0 };

	/// <summary>
	/// 왼쪽 점.
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