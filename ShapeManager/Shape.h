#pragma once

/// <summary>
/// ���� �������̽�.
/// </summary>
class Shape abstract {
public:
	virtual ~Shape() {};
	virtual void Display() const = 0;
};