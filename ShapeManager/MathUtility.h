#pragma once
#include "Header.h"

class MathUtility {
private:
	static const double epsilon;

public:
	/// <summary>
	/// 두 실수가 서로 같은지 비교합니다.
	/// </summary>
	/// <param name="_lhs">오른쪽 값.</param>
	/// <param name="_rhs">왼쪽 값.</param>
	/// <returns>같은지에 대한 여부.</returns>
	static bool Equals(const double _lhs, const double _rhs) {
		return std::abs(_lhs - _rhs) < epsilon;
	}

	/// <summary>
	/// 두 실수가 서로 같은지 비교합니다.
	/// </summary>
	/// <param name="_lhs">오른쪽 값.</param>
	/// <param name="_rhs">왼쪽 값.</param>
	/// <returns>같은지에 대한 여부.</returns>
	static bool Equals(const float _lhs, const float _rhs) {
		return std::abs(_lhs - _rhs) < static_cast<float>(epsilon);
	}
};