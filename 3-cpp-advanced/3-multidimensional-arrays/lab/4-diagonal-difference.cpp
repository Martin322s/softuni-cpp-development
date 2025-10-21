#include <iostream>
#include <sstream>
#include <cmath>

using namespace std;

int main(void) {
	int matrixSize;
	cin >> matrixSize;
	cin.ignore();

	int matrix[matrixSize][matrixSize] = {};

	for(int i = 0; i < matrixSize; i++) {
		int num;
		string sequence;
		getline(cin, sequence);

		istringstream istr(sequence);

		for (int j = 0; j < matrixSize; j++) {
			istr >> matrix[i][j];
		}	
	}
	
	int primaryDiagonal = 0, secondaryDiagonal = 0;

	for (int i = 0; i < matrixSize; i++) {
		primaryDiagonal += matrix[i][i];
	}

	for (int i = 0; i < matrixSize; i++) {
		secondaryDiagonal += matrix[i][matrixSize - 1 - i];
	}

	cout << abs(primaryDiagonal - secondaryDiagonal);

	cout << endl;
	
	return 0;
}
