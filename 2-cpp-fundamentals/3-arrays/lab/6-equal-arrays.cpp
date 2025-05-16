#include <iostream>
#include <string>
using namespace std;

int main() {
	int elementsCount, sum = 0, index = 0;
	bool identical = true;
	cin >> elementsCount;
	
	int firstArr[elementsCount] = {};
	int secondArr[elementsCount] = {};
	
	for (int i = 0; i < elementsCount; i++) {
		int newElement;
		cin >> newElement;
		
		firstArr[i] = newElement;
	}
	
	for (int i = 0; i < elementsCount; i++) {
		int newElement;
		cin >> newElement;
		
		secondArr[i] = newElement;
	}
	
	for (int i = 0; i < elementsCount; i++) {
		if (firstArr[i] != secondArr[i]) {
			identical = false;
			index = i;
			break;
		} else {
			sum += firstArr[i];
		}
	}
	
	if (identical) {
		cout << "Arrays are identical. Sum: " << sum;
	} else {
		cout << "Arrays are not identical. Found difference at " << index << " index.";
	}
	
	cout << endl;

	return 0;
}
