#include <iostream>

using namespace std;

int main() {
	int elementsCount;
	cin >> elementsCount;
	
	int arr[elementsCount] = {};
	
	for (int i = 0; i < elementsCount; i++) {
		int newElement;
		cin >> newElement;
		
		arr[i] = newElement;
	}
	
	for (int i = elementsCount - 1; i >= 0; i--) {
		cout << arr[i] << " ";
	}
	
	cout << endl;
	
	return 0;
}
