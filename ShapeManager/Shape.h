#pragma once

#include <cmath>
#include <format>
#include <iostream>
#include <string>

#include "Console.h"
#include "MathF.h"
#include "Singleton.h"

class Shape;
class ShapeManager;

class Point;

class Line;
class Circle;
class Triangle;
class Quadrangle;

/// <summary>
/// The base of all shape classes.
/// </summary>
class Shape abstract {
	friend ShapeManager;

public:
	virtual ~Shape() {};
	virtual void Display() const = 0;
};

class ShapeManager : 
	public Singleton<ShapeManager> {
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

	const Shape*& operator[](const int index);
	const Shape*& operator[](const std::function<const bool()> _predicate);

public:
	void Add(const Shape* const& _shape);
	void Add(const Shape* const*& _shapes);

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