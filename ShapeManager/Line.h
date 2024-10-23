#pragma once

class Line final : public Shape {
private:
	Point m_right;
	Point m_left;

public:
	Line();
	Line(const Point& _left, const Point& _right);
	Line(const Line& _other);
	virtual ~Line() override;

	/// <summary>
	/// 선의 길이를 구합니다.
	/// </summary>
	/// <returns></returns>
	const int GetLength() const;

	// Shape을(를) 통해 상속됨
	void Display() const override;
};

