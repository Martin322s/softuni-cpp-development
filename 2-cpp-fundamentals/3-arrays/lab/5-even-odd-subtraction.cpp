#include <iostream>

using namespace std;

int sumEvenNumbers(int arr[], int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] % 2 == 0) {
			sum += arr[i];
		}
	}
	return sum;
}

int sumOddNumbers(int arr[], int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] % 2 != 0) {
			sum += arr[i];
		}
	}
	return sum;
}

int main() {
	const int MAX_SIZE = 99;
	int elementsCount;
	cin >> elementsCount;

	int arr[MAX_SIZE];

	for (int i = 0; i < elementsCount; i++) {
		cin >> arr[i];
	}

	int evenNumbersSum = sumEvenNumbers(arr, elementsCount);
	int oddNumbersSum = sumOddNumbers(arr, elementsCount);

	cout << evenNumbersSum - oddNumbersSum << endl;

	return 0;
}
