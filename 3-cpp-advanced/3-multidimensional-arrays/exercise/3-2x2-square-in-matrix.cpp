#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

bool compareSquare(const vector<vector<char>>& matrix, int row, int col) {
    char topLeft = matrix[row][col];
    char topRight = matrix[row][col + 1];
    char bottomLeft = matrix[row + 1][col];
    char bottomRight = matrix[row + 1][col + 1];

    return topLeft == topRight &&
           topLeft == bottomLeft &&
           topLeft == bottomRight;
}

int main() {
    int rows, cols;
    cin >> rows >> cols;
    cin.ignore();

    vector<vector<char>> matrix(rows);

    for (int i = 0; i < rows; i++) {
        string line;
        getline(cin, line);
        istringstream istr(line);
        char ch;

        while (istr >> ch) {
            matrix[i].push_back(ch);
        }
    }

    int count = 0;

    for (int i = 0; i < rows - 1; i++) {
        for (int j = 0; j < cols - 1; j++) {
            if (compareSquare(matrix, i, j)) {
                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}
