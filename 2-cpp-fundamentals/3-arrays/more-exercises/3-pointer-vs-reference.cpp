#include <iostream>
#include <array>

void setLastToZero(std::array<int, 3>& arr) {
	arr[arr.size() - 1] = 0;
}

void tryToSetFirstTo100(const std::array<int, 3>& arr) {
	// arr[0] = 100;
}

void printArray(const int* p, size_t size) {
	for (size_t i = 0; i < size; ++i) {
		std::cout << p[i] << " ";
	}
	std::cout << std::endl;
}

int main() {
	std::array<int, 3> arr = {10, 20, 30};

	setLastToZero(arr);
	tryToSetFirstTo100(arr);
	printArray(arr.data(), arr.size());

	return 0;
}

