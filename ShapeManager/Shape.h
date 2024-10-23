#pragma once

/// <summary>
/// 도형 인터페이스.
/// </summary>
class Shape abstract {
public:
	virtual ~Shape() {};

	virtual void Display() const = 0;
}; 

/// <summary>
/// 도형 관리 매니저.
/// </summary>
class ShapeManager final {
private:
	/// <summary>
	/// 기본 사이즈.
	/// </summary>
	static const size_t DEFAULT_SIZE;

private:
	/// <summary>
	/// 관리하는 도형들.
	/// </summary>
	const Shape**	m_shapes;

	/// <summary>
	/// 관리할 도형의 최대 개수.
	/// </summary>
	size_t			m_size;

	/// <summary>
	/// 관리하고 있는 도형의 개수.
	/// </summary>
	size_t			m_count;

public:
	ShapeManager();
	ShapeManager(const size_t& _size);
	ShapeManager(const ShapeManager& _other) = delete;
	~ShapeManager();

public:
	/// <summary>
	/// 도형을 추가합니다.
	/// </summary>
	/// <param name="_shape">추가할 도형.</param>
	void AddShape(const Shape* _shape);

	/// <summary>
	/// 도형의 타입을 가져옵니다.
	/// </summary>
	/// <param name="_shape">해당 도형의 타입.</param>
	const std::string GetShapeType(const Shape*& _shape);

	/// <summary>
	/// 관리하고 있는 도형들을 출력합니다.
	/// </summary>
	void Display();
};

