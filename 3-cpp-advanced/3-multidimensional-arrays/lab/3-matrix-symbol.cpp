#include <iostream>

using namespace std;

int main(void) {
	int matrixSize;
	cin >> matrixSize;
	cin.ignore();

	char matrix[matrixSize][matrixSize] = {};

	for(int i = 0; i < matrixSize; i++) {
		int num;
		string sequence;
		getline(cin, sequence);

		for (int j = 0; j < matrixSize; j++) {
			matrix[i][j] = sequence[j];
		}	
	}

	char symbol;
	cin >> symbol;

	int row = -1, column = -1;

	for (int i = 0; i < matrixSize; i++) {
		for (int j = 0; j < matrixSize; j++) {
			if (matrix[i][j] == symbol) {
				row = i;
				column = j;
				break;
			}
		}

		if (row != -1 && column != -1) {
			break;
		}
	}

	if ((row != -1 && column != -1)) {
		cout << '(' << row << ", " << column << ')' << endl;
	} else {
		cout << symbol << " does not occur in the matrix" << endl;
	}

	return 0;
}
