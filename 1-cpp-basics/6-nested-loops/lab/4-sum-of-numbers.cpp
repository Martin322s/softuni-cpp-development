#include <iostream>
using namespace std;

int main() {
    int start, end, magicNumber, combinationCount = 0;
    cin >> start >> end >> magicNumber;

    for (int i = start; i <= end; i++) {
        for (int j = start; j <= end; j++) {
            combinationCount++;
            if (i + j == magicNumber) {
                cout << "Combination N:" << combinationCount << " (" << i << " + " << j << " = " << magicNumber << ")" << endl;
                return 0;
            }
        }
    }

    cout << combinationCount << " combinations - neither equals " << magicNumber << endl;
    return 0;
}
