#pragma once

class Triangle : public Shape {
private:
	Point m_vertex1;
	Point m_vertex2;
	Point m_vertex3;

public:
	Triangle();
	Triangle(const Point& _first, const Point& _second, const Point& _third);
	Triangle(const Triangle& _other);
	virtual ~Triangle() override;

public:
	// Shape을(를) 통해 상속됨
	void Display() const override;
};

