#pragma once

#include <functional>

#include "Shape.h"
#include "Singleton.h"

class Shape;

class ShapeManager :
	public Singleton<ShapeManager> {
private:
	static const size_t DEFAULT_SHAPE_COUNT;

private:
	const Shape** m_shapes;

	size_t m_size;

	size_t m_count;

public:
	ShapeManager();
	ShapeManager(const size_t& _size);
	~ShapeManager();

	const Shape*& operator[](const int index);
	const Shape*& operator[](const std::function<const bool()> _predicate);

public:
	void Add(const Shape*& _shape);
	void Add(const Shape**& _shapes);

	void Delete(const int _index);
	void DeleteAll(const int _begin, const int _end);
	void DeleteAll(const std::function<const bool()> _predicate);
	void Clear();

	const bool IsEmpty() const;
	const size_t GetCount() const;
	const Shape*& GetShape(const int index) const;
	const Shape*& GetShape(const std::function<const bool()> _predicate) const;

	void IsExists(std::function<bool()> _predicate);
	void IsContains(const Shape*& _shape);

	const std::string GetShapeType(const Shape*& _shape);

	void Display();
};

