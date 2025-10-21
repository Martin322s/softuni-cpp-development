#include <iostream>
#include <sstream>
#include <array>
#include <string>

using namespace std;

const int ROWS = 10;
const int COLUMNS = 10;

void readMatrix(istream& str, int rows, array<array<int, ROWS>, ROWS> & matrix) {
	for (int i = 0; i < rows; i++) {
		string line;
		getline(str, line);
	
		istringstream istr(line);
		int currNum;
		int j = 0;
		
		while(istr >> currNum) {
			matrix[i][j] = currNum;
			j++;
		}
		
	}
}

int main() {
	int rowsFirstMatrix;
	cin >> rowsFirstMatrix;
	cin.ignore();
	
	array<array<int, ROWS>, ROWS> firstMatrix = {}, secondMatrix = {};
	
	readMatrix(cin, rowsFirstMatrix, firstMatrix);
	
	int rowsSecondMatrix;
	cin >> rowsSecondMatrix;
	cin.ignore();
	
	readMatrix(cin, rowsSecondMatrix, secondMatrix);
	
	bool equal = true;
	int size = 0;
	
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLUMNS; j++) {
			if (firstMatrix[i][j] != secondMatrix[i][j])
				equal = false;
		}
	}
	
	cout << (equal ? "equal" : "not equal");
	
	cout << endl;
	
	return 0;
}
