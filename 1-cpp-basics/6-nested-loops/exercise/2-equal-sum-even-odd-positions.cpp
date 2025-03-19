#include <iostream>
using namespace std;

int main() {
    int start, end;
    cin >> start >> end;

    for (int num = start; num <= end; num++) {
        int evenSum = 0, oddSum = 0;
        string numStr = to_string(num);

        for (int i = 0; i < 6; i++) {
            int digit = numStr[i] - '0';
            if (i % 2 == 0) oddSum += digit;
            else evenSum += digit;
        }

        if (evenSum == oddSum) {
            cout << num << " ";
        }
    }

    return 0;
}
