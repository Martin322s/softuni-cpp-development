#include <iostream>
#include <string>

using namespace std;

void reverseArray(string array[], int size) {
    for (int i = 0; i < size / 2; i++) {
        string temp = array[i];
        array[i] = array[size - 1 - i];
        array[size - 1 - i] = temp;
    }
}

int main() {
	int elementsCount;
	cin >> elementsCount;
	
	string arr[elementsCount] = {};
	
	for (int i = 0; i < elementsCount; i++) {
		string newElement;
		cin >> newElement;
		
		arr[i] = newElement;
	}
	
	reverseArray(arr, elementsCount);
	
	for (int i = 0; i < elementsCount; i++) {
		cout << arr[i] << " ";
	}
	
	cout << endl;
	
	return 0;
}
