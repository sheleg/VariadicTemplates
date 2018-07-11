#include "Logger.h"
#include <iostream>

int main() {
	auto logger = new Logger();
	logger->log("Hello", 123, "Vlada", 5.99);
	return 0;
}