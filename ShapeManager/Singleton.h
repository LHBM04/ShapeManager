#pragma once

template <typename T>
class Singleton {
protected:
	Singleton() {}
	Singleton(const Singleton&) = delete;
	void operator = (const Singleton&) = delete;

public:
	/// <summary>
	/// 생성된 정적 인스턴스를 가져옵니다.
	/// </summary>
	/// <returns>생성된 정적 인스턴스.</returns>
	static T& GetInstance() {
		static T* instance = new T();
		return *instance;
	}
};