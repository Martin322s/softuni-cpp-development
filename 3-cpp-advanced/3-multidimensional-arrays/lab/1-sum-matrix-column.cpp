#include <iostream>
#include <sstream>

using namespace std;

int main() {
	int rows, columns;
	cin >> rows >> columns;
	cin.ignore();

	int matrix[rows][columns] = {};

	for(int i = 0; i < rows; i++) {
		int num;
		string sequence;
		getline(cin, sequence);

		istringstream istr(sequence);

		for (int j = 0; j < columns; j++) {
			istr >> matrix[i][j];
		}	
	}

	for (int i = 0; i < columns; i++) {
		int sum = 0;

		for (int j = 0; j < rows; j++) {
			sum += matrix[j][i];
		}

		cout << sum << endl;
		sum = 0;
	}

	cout << endl;

	return 0;
}

