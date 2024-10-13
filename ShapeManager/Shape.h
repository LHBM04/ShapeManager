#pragma once

#include <cmath>
#include <format>
#include <iostream>
#include <string>

#include "Console.h"
#include "ShapeManager.h"
#include "Singleton.h"

class ShapeManager;

/// <summary>
/// The base of all shape classes.
/// </summary>
class Shape abstract {
	friend ShapeManager;
private:
	std::string m_name;
	std::string m_graphic;

public:
	virtual ~Shape() {};
	virtual void Display() const = 0;
};