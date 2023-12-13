#pragma once

/// <summary>
/// ��.
/// </summary>
class Circle : public Shape {
private:
	/// <summary>
	/// �߽���.
	/// </summary>
	Point m_center;

	/// <summary>
	/// ����
	/// </summary>
	Point m_end;

public:
	Circle();
	Circle(const Point& _center, const Point& _end);
	Circle(const Circle& _other);
	virtual ~Circle() override;

	/// <summary>
	/// �ش� ���� �������� �����ɴϴ�.
	/// </summary>
	/// <returns>���� ������.</returns>
	const double GetRadius() const;

	// Shape��(��) ���� ��ӵ�
	void Display() const override;
};

