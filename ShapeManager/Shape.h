#pragma once

#include <cmath>
#include <format>
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
protected:
	std::string m_name{"???"};
	std::string m_graphic{"???"};

public:	
	virtual ~Shape() {};

	virtual const double GetSize() const = 0;
	virtual void Display() const = 0;

public:
	const std::string& GetName() const;
	const std::string& GetGraphic() const;

};