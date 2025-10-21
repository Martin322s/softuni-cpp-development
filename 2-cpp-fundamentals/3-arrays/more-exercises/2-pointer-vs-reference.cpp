#include <iostream>
#include <array>

void modifyByPointer(int* p) {
	*p = 99;
}

void modifyByRef(int& r) {
	r = 77;
}

void tryModifyConst(const int* p) {
	*p = 0;
}

int main() {
	std::array<int, 3> arr = {5, 10, 15};
	modifyByPointer(arr.data());
	modifyByRef(arr[1]);
//	tryModifyConst(&arr[2]);
	
	for (int element : arr) {
		std::cout << element << " ";
	}
	
	std::cout << std::endl;
	
	return 0;
}
