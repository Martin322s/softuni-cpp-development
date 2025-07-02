#include <iostream>
#include <vector>
#include <limits>

using namespace std;

int main() {
    int rows, cols;
    cin >> rows >> cols;

    vector<vector<int>> matrix(rows, vector<int>(cols));

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> matrix[i][j];

    int maxSum = numeric_limits<int>::min();
    int bestRow = 0, bestCol = 0;

    for (int i = 0; i < rows - 2; i++) {
        for (int j = 0; j < cols - 2; j++) {
            int currentSum =
                matrix[i][j] + matrix[i][j + 1] + matrix[i][j + 2] +
                matrix[i + 1][j] + matrix[i + 1][j + 1] + matrix[i + 1][j + 2] +
                matrix[i + 2][j] + matrix[i + 2][j + 1] + matrix[i + 2][j + 2];

            if (currentSum > maxSum) {
                maxSum = currentSum;
                bestRow = i;
                bestCol = j;
            }
        }
    }

    cout << "Sum = " << maxSum << endl;
    for (int i = bestRow; i < bestRow + 3; i++) {
        for (int j = bestCol; j < bestCol + 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
