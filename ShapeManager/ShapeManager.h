#pragma once

#include <functional>

#include "Shape.h"
#include "Singleton.h"

class Shape;

class ShapeManager :public Singleton<ShapeManager> {
	friend Shape;
private:
	/// <summary>
	/// �����ϴ� ������.
	/// </summary>
	const Shape** m_shapes{ nullptr };

	/// <summary>
	/// ���� ���� ������ �뷮.
	/// </summary>
	size_t m_capacity{ 0 };

	/// <summary>
	/// ���� ���� ���� �������� ����.
	/// </summary>
	size_t m_count{ 0 };

public:
	ShapeManager(const size_t&);
	ShapeManager(const Shape**);
	~ShapeManager();

	//const std::optional<const Shape*&> operator[](const size_t&) const;
	//const std::optional<const Shape*&> operator[](const std::function<const bool(const Shape*&)>) const;

public:
	void Add(const Shape*&);
	void Add(const Shape**&);

	void Delete(const size_t);
	void DeleteAll();
	void DeleteAll(const size_t, const size_t);
	void DeleteAll(const std::function<const bool(const Shape*&)>);

	const bool IsEmpty() const;
	const size_t GetCount() const;

	const Shape*& GetShape(const size_t) const;
	const Shape*& GetShape(const std::function<const bool(const Shape*&)>) const;
	const Shape*& GetShapes(const size_t, const size_t) const;
	const Shape*& GetShapes(const std::function<const bool(const Shape*&)>) const;

	const bool IsExists(std::function<bool(const Shape*&)>) const;
	const bool IsContains(const Shape*&) const;
};

