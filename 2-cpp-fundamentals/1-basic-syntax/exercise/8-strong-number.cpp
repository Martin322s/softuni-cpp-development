#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    int originalNumber = n;
    int sum = 0;

    while (n > 0) {
        int digit = n % 10;

        int fact = 1;
        for (int i = 1; i <= digit; i++) {
            fact *= i;
        }

        sum += fact;
        n /= 10;
    }

    if (sum == originalNumber) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }

    return 0;
}
