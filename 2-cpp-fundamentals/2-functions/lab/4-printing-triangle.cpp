#include <iostream>
using namespace std;

void printRow(int n) {
    for (int i = 1; i <= n; i++) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    int number;
    cin >> number;

    for (int i = 1; i <= number; i++) {
        printRow(i);
    }

    for (int i = number - 1; i >= 1; i--) {
        printRow(i);
    }

    return 0;
}
