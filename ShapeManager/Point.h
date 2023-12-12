#pragma once

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
	Point(const Point& _other) = default;
	~Point();

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

