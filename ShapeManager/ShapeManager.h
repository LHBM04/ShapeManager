#pragma once

/// <summary>
/// 도형 관리 매니저.
/// </summary>
class ShapeManager final : public Singleton<ShapeManager> {
private:
	/// <summary>
	/// 기본 사이즈.
	/// </summary>
	static const size_t DEFAULT_SHAPE_COUNT;

private:
	/// <summary>
	/// 관리하는 도형들.
	/// </summary>
	const Shape** m_shapes;

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
	~ShapeManager();

public:
	/// <summary>
	/// 도형을 추가합니다.
	/// </summary>
	/// <param name="_shape">추가할 도형.</param>
	void InsertShape(const Shape* _shape);

	/// <summary>
	/// 기존 도형을 삭제합니다.
	/// </summary>
	void DeleteShape();

	/// <summary>
	/// 비어있는지 확인합니다.
	/// </summary>
	/// <returns></returns>
	const bool IsEmpty() const;

	/// <summary>
	/// 도형들의 개수를 가져옵니다.
	/// </summary>
	/// <returns></returns>
	const size_t Count() const;

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

