#include <iostream>
#include <sstream>
#include <string>
#include <memory>

using namespace std;

int main() {
	int rows, cols;
	cin >> rows >> cols;
	
	int* matrix = new int[rows * cols];
	
	for(int row = 0; row < rows; row++) {
		for(int col = 0; col < cols; col++) {
			cin >> matrix[row * cols + col];
		}
	}
	
	int subRows, subCols;
	cin >> subRows >> subCols;
	
	for(int row = 0; row < subRows; row++) {
		for(int col = 0; col < subCols; col++) {
			cout << matrix[row * cols + col] << ' ';
		}
		
		cout << endl;
	}
	
	delete [] matrix;
	
	cout << endl;
	
	return 0;
}
