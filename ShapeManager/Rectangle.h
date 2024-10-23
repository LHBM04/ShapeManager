#pragma once

class Rectangle final : public Shape {
private:
	/// <summary>
	/// Ã¹¹øÂ° ²ÀÁþÁ¡.
	/// </summary>
	Point m_vertex1;
	
	/// <summary>
	/// µÎ¹øÂ° ²ÀÁþÁ¡.
	/// </summary>
	Point m_vertex2;

	/// <summary>
	/// ¼¼¹øÂ° ²ÀÁþÁ¡.
	/// </summary>
	Point m_vertex3;

	/// <summary>
	/// ³×¹øÂ° ²ÀÁþÁ¡.
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
	// ShapeÀ»(¸¦) ÅëÇØ »ó¼ÓµÊ
	void Display() const override;

};

