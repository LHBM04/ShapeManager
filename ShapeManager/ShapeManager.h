#pragma once

/// <summary>
/// ���� ���� �Ŵ���.
/// </summary>
class ShapeManager final : public Singleton<ShapeManager> {
private:
	/// <summary>
	/// �⺻ ������.
	/// </summary>
	static const size_t DEFAULT_SHAPE_COUNT;

private:
	/// <summary>
	/// �����ϴ� ������.
	/// </summary>
	const Shape** m_shapes;

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
	~ShapeManager();

public:
	/// <summary>
	/// ������ �߰��մϴ�.
	/// </summary>
	/// <param name="_shape">�߰��� ����.</param>
	void InsertShape(const Shape* _shape);

	/// <summary>
	/// ���� ������ �����մϴ�.
	/// </summary>
	void DeleteShape();

	/// <summary>
	/// ����ִ��� Ȯ���մϴ�.
	/// </summary>
	/// <returns></returns>
	const bool IsEmpty() const;

	/// <summary>
	/// �������� ������ �����ɴϴ�.
	/// </summary>
	/// <returns></returns>
	const size_t Count() const;

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

