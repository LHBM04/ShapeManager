#pragma once

// Standards
#include <chrono>
#include <cmath>
#include <cstdio>
#include <format>
#include <functional>
#include <iostream>
#include <stack>
#include <string>
#include <thread>

#pragma warning (disable : 4244)
#pragma warning (disable : 4996)
#pragma warning (disable : 6031)

// Utilities
#include "Singleton.h"
#include "DrawUtility.h"
#include "MathUtility.h"
#include "Menu.h"

// Shapes
#include "Shape.h"
#include "Point.h"
#include "Line.h"
#include "Circle.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "ShapeGenerator.h"
#include "ShapeManager.h"

// Scenes
#include "Scene.h"
#include "SceneManager.h"
#include "MainScene.h"
#include "CreateScene.h"
#include "DisplayScene.h"
#include "DestoryScene.h"