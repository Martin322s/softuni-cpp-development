#include <iostream>

using namespace std;

const int SIZE = 10;

void printMatrix(const char m[SIZE][SIZE])
{
	for(int row = 0; row < SIZE; row++) {
		for (int col = 0; col < SIZE; col++) {
			cout << m[row][col];
		}
		
		cout << endl;
	}
}

const char NORMAL = '.';
const char RUST = '!';
const char ALU = '#';

void setRust(char m[SIZE][SIZE], int r, int c) 
{
	if (r < 0 || r >= 10 || c < 0 || c >= 10) {
		return;
	}
	
	if (m[r][c] == NORMAL)
		m[r][c] = RUST;
}

void copyPlate(const char source[SIZE][SIZE], char dest[SIZE][SIZE])
{
	for(int row = 0; row < SIZE; row++) {
		for (int col = 0; col < SIZE; col++) {
			dest[row][col] = source[row][col];
		}
	}
}

void applyRust(char m[SIZE][SIZE])
{
	char newRust[SIZE][SIZE];
	copyPlate(m, newRust);
	
	for(int row = 0; row < SIZE; row++) {
		for (int col = 0; col < SIZE; col++) {
			switch(m[row][col])
			{
				case NORMAL: 
				case ALU:
					break;
				case '!': 
					setRust(newRust, row - 1, col);
					setRust(newRust, row + 1, col);
					setRust(newRust, row, col - 1);
					setRust(newRust, row, col + 1);				
					break;
			}
		}
	}
	
	copyPlate(newRust, m);
}

int main() {
	
	char m[SIZE][SIZE] = {};
	
	for(int row = 0; row < SIZE; row++) {
		for (int col = 0; col < SIZE; col++) {
			cin >> m[row][col];
		}
	}
	
	int ticks;
	cin >> ticks;
	
	while(ticks--) {
		applyRust(m);
	}
	
	printMatrix(m);
	
	return 0;
}

