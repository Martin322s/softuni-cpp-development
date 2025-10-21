#include <iostream>

using namespace std;

const int MAX_SIZE = 6;

int main() {
	int dimensionSize;
	cin >> dimensionSize;

	int matrix[MAX_SIZE][MAX_SIZE] = {};

	for(int i = 0; i < dimensionSize; i++) {
		for (int j = 0; j < dimensionSize; j++) {
			cin >> matrix[i][j];
		}
	}

	int sum = 0;

	for(int i = 0; i < dimensionSize; i++) {
		for (int j = 0; j < dimensionSize; j++) {
			if (i != j && j != dimensionSize - 1 - i) {
				if (matrix[i][j] % 2 != 0) {
					sum += matrix[i][j];
				}
			}
		}
	}

	cout << "The sum is: " << sum << endl;

	return 0;
}
