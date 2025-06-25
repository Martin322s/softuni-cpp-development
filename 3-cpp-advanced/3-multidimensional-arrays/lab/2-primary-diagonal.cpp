#include <iostream>
#include <sstream>

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
	
	int sum = 0;

	for (int i = 0; i < matrixSize; i++) {
		sum += matrix[i][i];
	}

	cout << sum;

	cout << endl;
	
	return 0;
}
