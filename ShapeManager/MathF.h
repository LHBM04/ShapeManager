#pragma once

#include <cmath>

class MathF {
private:
	static const double epsilon;

public:
	/// <summary>
	/// �� �Ǽ��� ���� ������ ���մϴ�.
	/// </summary>
	/// <param name="_lhs">������ ��.</param>
	/// <param name="_rhs">���� ��.</param>
	/// <returns>�������� ���� ����.</returns>
	static const bool Equals(const double _lhs, const double _rhs) {
		return std::abs(_lhs - _rhs) < epsilon;
	}

	/// <summary>
	/// �� �Ǽ��� ���� ������ ���մϴ�.
	/// </summary>
	/// <param name="_lhs">������ ��.</param>
	/// <param name="_rhs">���� ��.</param>
	/// <returns>�������� ���� ����.</returns>
	static const bool Equals(const float _lhs, const float _rhs) {
		return std::abs(_lhs - _rhs) < static_cast<float>(epsilon);
	}
};