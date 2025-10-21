#include <iostream>
using namespace std;

int main() {
    int n, current = 1;
    cin >> n;

    bool isFinished = false;
    for (int row = 1; row <= n; row++) {
        for (int col = 1; col <= row; col++) {
            cout << current << " ";
            current++;
            if (current > n) {
                isFinished = true;
                break;
            }
        }
        cout << endl;
        if (isFinished) break;
    }

    return 0;
}
