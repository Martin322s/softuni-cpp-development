#include <iostream>
#include <string>
using namespace std;

int main() {
    int N1, N2;
    char operation;

    cin >> N1;
    cin >> N2;
    cin >> operation;

    cout.setf(ios::fixed);
    cout.precision(2);

    switch (operation) {
        case '+': {
            int result = N1 + N2;
            cout << N1 << " + " << N2 << " = " << result 
                 << " - " << (result % 2 == 0 ? "even" : "odd") << endl;
            break;
        }
        case '-': {
            int result = N1 - N2;
            cout << N1 << " - " << N2 << " = " << result 
                 << " - " << (result % 2 == 0 ? "even" : "odd") << endl;
            break;
        }
        case '*': {
            int result = N1 * N2;
            cout << N1 << " * " << N2 << " = " << result 
                 << " - " << (result % 2 == 0 ? "even" : "odd") << endl;
            break;
        }
        case '/': {
            if (N2 == 0) {
                cout << "Cannot divide " << N1 << " by zero" << endl;
            } else {
                double result = static_cast<double>(N1) / N2;
                cout << N1 << " / " << N2 << " = " << result << endl;
            }
            break;
        }
        case '%': {
            if (N2 == 0) {
                cout << "Cannot divide " << N1 << " by zero" << endl;
            } else {
                int result = N1 % N2;
                cout << N1 << " % " << N2 << " = " << result << endl;
            }
            break;
        }
        default:
            cout << "Invalid operator!" << endl;
            break;
    }

    return 0;
}
