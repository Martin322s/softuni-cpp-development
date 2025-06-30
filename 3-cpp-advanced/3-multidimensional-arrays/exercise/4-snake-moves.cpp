#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int rows, cols;
    cin >> rows >> cols;
    string snake;
    cin >> snake;

    vector<vector<char>> matrix(rows, vector<char>(cols));
    int snakeIndex = 0;

    for (int i = 0; i < rows; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < cols; j++) {
                matrix[i][j] = snake[snakeIndex % snake.length()];
                snakeIndex++;
            }
        } else {
            for (int j = cols - 1; j >= 0; j--) {
                matrix[i][j] = snake[snakeIndex % snake.length()];
                snakeIndex++;
            }
        }
    }

    for (const auto& row : matrix) {
        for (char ch : row) {
            cout << ch;
        }
        cout << endl;
    }

    return 0;
}
