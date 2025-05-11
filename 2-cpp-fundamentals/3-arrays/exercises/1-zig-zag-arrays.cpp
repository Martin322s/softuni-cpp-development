#include <iostream>
#include <string>

using namespace std;

int main() {
	int N;
	cin >> N;
	int firstArray[N] = {};
	int secondArray[N] = {};
	
	for (int i = 0; i < N; i++) {
		int firstNumber, secondNumber;
		cin >> firstNumber >> secondNumber;
		
		if (i % 2 == 0) {
			firstArray[i] = firstNumber;
			secondArray[i] = secondNumber;
		} else {
			firstArray[i] = secondNumber;
			secondArray[i] = firstNumber;
		}
	}
	
	for (int element : firstArray) {
		cout << element << " ";
	}
	
	cout << endl;
	
	for (int element : secondArray) {
		cout << element << " ";
	}
	
	cout << endl;
	
	return 0;
}
