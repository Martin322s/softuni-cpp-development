#include <iostream>
#include <array>

using namespace std;

int main() {
	const int MAX_SIZE = 99;
	int elementsCount, sum = 0;
	cin >> elementsCount;
	
	array<int, MAX_SIZE> arr;
	
	for (int i = 0; i < elementsCount; i++) {
		int newElement;
		cin >> newElement;
		
		arr[i] = newElement;
	}
	
	for (int i = 0; i < elementsCount; i++) {
		if (arr[i] % 2 == 0) {
			sum += arr[i];
		}
	}
	
	cout << sum;
	cout << endl;
	
	return 0;
}
