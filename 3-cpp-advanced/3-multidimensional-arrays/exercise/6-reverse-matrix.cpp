#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

vector<vector<int> > fillMatrix(int rows, int cols);

void printResult(vector<vector<int> > matrix);

int main() {
    int rows, cols;
    cin >> rows >> cols;

    vector<vector<int> > matrix = fillMatrix(rows, cols);

    printResult(matrix);

    return 0;
}

vector<vector<int> > fillMatrix(int rows, int cols) {
    vector<vector<int> > matrix(rows, vector<int>(cols));

    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            cin >> matrix[r][c];
        }
    }

    return matrix;
}

void printResult(vector<vector<int> > matrix) {
    for (int j = matrix[0].size() - 1; j >= 0; j--) {
        int cols = j;
        for (int i = matrix.size() - 1; i >= 0; i--) {
            cout << matrix[i][cols++] << " ";
            if (cols == matrix[0].size() || i == 0) {
                cout << endl;
                break;
            }
        }
    }

    for (int i = matrix.size() - 2; i >= 0; i--) {
        int rows = i;
        for (int j = 0; j < matrix[0].size(); j++) {
            cout << matrix[rows--][j] << " ";
            if (rows < 0 || j == matrix[0].size() - 1) {
                cout << endl;
                break;
            }
        }
    }
}
