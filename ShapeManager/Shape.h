#pragma once

/// <summary>
/// 도형 인터페이스.
/// </summary>
class Shape abstract {
public:
	virtual ~Shape() {};
	virtual void Display() const = 0;
};