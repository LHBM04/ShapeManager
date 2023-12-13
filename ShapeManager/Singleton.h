#pragma once

template <typename T>
class Singleton {
protected:
	Singleton() {}
	Singleton(const Singleton&) = delete;
	void operator = (const Singleton&) = delete;

public:
	/// <summary>
	/// ������ ���� �ν��Ͻ��� �����ɴϴ�.
	/// </summary>
	/// <returns>������ ���� �ν��Ͻ�.</returns>
	static T& GetInstance() {
		static T* instance = new T();
		return *instance;
	}
};