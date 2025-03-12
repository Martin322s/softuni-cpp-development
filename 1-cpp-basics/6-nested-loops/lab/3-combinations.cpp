#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    cin >> n;

    for (int x1 = 0; x1 <= n; x1++) {
        for (int x2 = 0; x2 <= n; x2++) {
            for (int x3 = 0; x3 <= n; x3++) {
                if (x1 + x2 + x3 == n) {
                    count++;
                }
            }
        }
    }

    cout << count << endl;
    return 0;
}
