#pragma once

class ShapeGenerator final {
public:
	/// <summary>
	/// 
	/// </summary>
	/// <returns></returns>
	static const Line* const GenerateLine();

	/// <summary>
	/// 
	/// </summary>
	/// <returns></returns>
	static const Circle* const GenerateCircle();

	/// <summary>
	/// 
	/// </summary>
	/// <returns></returns>
	static const Triangle* const GenerateTriangle();

	/// <summary>
	/// 
	/// </summary>
	/// <returns></returns>
	static const Rectangle* const GenerateRectangle();
};
