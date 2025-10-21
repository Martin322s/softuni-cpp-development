#include <iostream>
#include <climits>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int minNumber = INT_MAX;
    int num;

    while (true) {
        if (!(cin >> num)) {
            break;
        }

        if (minNumber > num) {
            minNumber = num;
        }
    }

    cout << minNumber << endl;

    return 0;
}
