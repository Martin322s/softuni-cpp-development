#include <iostream>
#include <sstream>
#include <string>

using namespace std;

size_t countTokens(const string& line) {
	size_t tokens = 0;
	istringstream istr(line);
	string temp;

	while (istr >> temp)
		tokens++;

	return tokens;
}

void readMatrix(istream& in, int** &m, int& rows, int& cols) {
	in >> rows;
	string dummy;
	getline(in, dummy);

	m = new int*[rows];

	for (int r = 0; r < rows; r++) {
		string curRow;
		getline(in, curRow);
		cols = countTokens(curRow);

		m[r] = new int[cols];
		istringstream istr(curRow);

		for (int c = 0; c < cols; c++) {
			istr >> m[r][c];
		}
	}
}

void deleteMatrix(int** m, int rows) {
	for (int r = 0; r < rows; r++) {
		delete[] m[r];
	}
	delete[] m;
}

bool areEqual(int** m1, int r1, int c1, int** m2, int r2, int c2) {
	if (r1 != r2 || c1 != c2)
		return false;

	for (int r = 0; r < r1; r++) {
		for (int c = 0; c < c1; c++) {
			if (m1[r][c] != m2[r][c])
				return false;
		}
	}
	return true;
}

int main() {
	int m1r, m1c, m2r, m2c;
	int **matrix1, **matrix2;

	readMatrix(cin, matrix1, m1r, m1c);
	readMatrix(cin, matrix2, m2r, m2c);

	if (areEqual(matrix1, m1r, m1c, matrix2, m2r, m2c)) {
		cout << "equal" << endl;
	} else {
		cout << "not equal" << endl;
	}

	deleteMatrix(matrix1, m1r);
	deleteMatrix(matrix2, m2r);

	return 0;
}
