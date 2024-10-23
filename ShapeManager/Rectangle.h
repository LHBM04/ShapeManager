#pragma once

class Rectangle final : public Shape {
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
	Rectangle();
	Rectangle(const Point& _first, const Point& _second);
	Rectangle(const Point& _first, const Point& _second, const Point& third, const Point& _fourth);
	Rectangle(const Rectangle& _other);
	virtual ~Rectangle() override;

public:
	const double GetArea() const;
	// Shape��(��) ���� ��ӵ�
	void Display() const override;

};

