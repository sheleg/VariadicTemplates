#include <iostream>

#pragma once
class Logger
{
public:
	Logger() {}
	~Logger() {}

	auto log() {
		std::cout << std::endl;
		return 0;
	}

	template <typename T, typename ... Args>
	auto log(T t, Args ... args) {
		std::cout << t << " ";
		return log(args...);
	}
};


