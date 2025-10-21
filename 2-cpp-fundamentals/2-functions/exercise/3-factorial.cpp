#include <iostream>
#include <iomanip>

using namespace std;

long double factorial(int a) {
    if (a == 0 || a == 1) {
        return 1;
    }

    long double result = 1.0;

    for (int i = 2; i <= a; i++) {
        result *= i;
    }

    return result;
}

int main() {
    int a, b;
    cin >> a >> b;

    long double firstNumber = factorial(a);
    long double secondNumber = factorial(b);

    long double result = firstNumber / secondNumber;

    cout << fixed << setprecision(2) << result << endl;

    return 0;
}
