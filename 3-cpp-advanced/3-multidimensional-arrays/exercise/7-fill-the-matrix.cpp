#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    string input;
    getline(cin, input);
    int size = stoi(input.substr(0, input.find(',')));
    char pattern = input.back();

    vector<vector<int>> matrix(size, vector<int>(size));
    int num = 1;

    if (pattern == 'A') {
        for (int col = 0; col < size; col++) {
            for (int row = 0; row < size; row++) {
                matrix[row][col] = num++;
            }
        }
    } else if (pattern == 'B') {
        for (int col = 0; col < size; col++) {
            if (col % 2 == 0) {
                for (int row = 0; row < size; row++) {
                    matrix[row][col] = num++;
                }
            } else {
                for (int row = size - 1; row >= 0; row--) {
                    matrix[row][col] = num++;
                }
            }
        }
    }

    for (const auto& row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
