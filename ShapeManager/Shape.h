#pragma once

/// <summary>
/// ���� �������̽�.
/// </summary>
class Shape abstract {
public:
	virtual ~Shape() {};

	virtual void Display() const = 0;
}; 

/// <summary>
/// ���� ���� �Ŵ���.
/// </summary>
class ShapeManager final {
private:
	/// <summary>
	/// �⺻ ������.
	/// </summary>
	static const size_t DEFAULT_SIZE;

private:
	/// <summary>
	/// �����ϴ� ������.
	/// </summary>
	const Shape**	m_shapes;

	/// <summary>
	/// ������ ������ �ִ� ����.
	/// </summary>
	size_t			m_size;

	/// <summary>
	/// �����ϰ� �ִ� ������ ����.
	/// </summary>
	size_t			m_count;

public:
	ShapeManager();
	ShapeManager(const size_t& _size);
	ShapeManager(const ShapeManager& _other) = delete;
	~ShapeManager();

public:
	/// <summary>
	/// ������ �߰��մϴ�.
	/// </summary>
	/// <param name="_shape">�߰��� ����.</param>
	void AddShape(const Shape* _shape);

	/// <summary>
	/// ������ Ÿ���� �����ɴϴ�.
	/// </summary>
	/// <param name="_shape">�ش� ������ Ÿ��.</param>
	const std::string GetShapeType(const Shape*& _shape);

	/// <summary>
	/// �����ϰ� �ִ� �������� ����մϴ�.
	/// </summary>
	void Display();
};

