#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int num = 1111; num <= 9999; num++) {
        string numStr = to_string(num);
        bool isSpecial = true;

        for (char ch : numStr) {
            int digit = ch - '0';
            if (digit == 0 || n % digit != 0) {
                isSpecial = false;
                break;
            }
        }

        if (isSpecial) cout << num << " ";
    }

    return 0;
}
