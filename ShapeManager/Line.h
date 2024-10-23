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
	/// ���� ���̸� ���մϴ�.
	/// </summary>
	/// <returns></returns>
	const int GetLength() const;

	// Shape��(��) ���� ��ӵ�
	void Display() const override;
};

