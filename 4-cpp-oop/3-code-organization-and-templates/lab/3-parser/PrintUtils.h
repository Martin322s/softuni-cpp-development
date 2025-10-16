#pragma once

#include <vector>
#include <iostream>

template<typename T>
void printVector(const std::vector<T> & v) {
	for (const T & curr : v) {
		std::cout << curr << ' ';
	}
	
	std::cout << std::endl;
}

