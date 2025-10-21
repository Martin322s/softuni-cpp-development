#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string password;
    cin >> password;

    bool isLengthValid = password.length() >= 6 && password.length() <= 10;
    bool isContentValid = true;
    int digitCount = 0;

    for (char ch : password) {
        if (!isalnum(ch)) {
            isContentValid = false;
        }
        if (isdigit(ch)) {
            digitCount++;
        }
    }

    bool isDigitValid = digitCount >= 2;

    if (isLengthValid && isContentValid && isDigitValid) {
        cout << "Password is valid" << endl;
    } else {
        if (!isLengthValid) {
            cout << "Password must be between 6 and 10 characters" << endl;
        }
        if (!isContentValid) {
            cout << "Password must consist only of letters and digits" << endl;
        }
        if (!isDigitValid) {
            cout << "Password must have at least 2 digits" << endl;
        }
    }

    return 0;
}
