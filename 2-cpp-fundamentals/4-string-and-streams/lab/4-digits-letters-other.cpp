#include <iostream>
#include <string>

using namespace std;

bool isDigit(char symbol) {
    if (symbol >= 48 && symbol <= 57) {
        return true;
    }

    return false;
}

bool isUpperCaseLetter(char symbol) {
    if (symbol >= 65 && symbol <= 90) {
        return true;
    }

    return false;
}

bool isLowerCaseLetter(char symbol) {
    if (symbol >= 97 && symbol <= 122) {
        return true;
    }

    return false;
}

int main() {
    string text, digits = "", letters = "", others = "";
    cin >> text;

    for (int i = 0; i < text.length(); i++) {
        if (isDigit(text[i])) {
            digits += text[i];
        } else if (isLowerCaseLetter(text[i])) {
            letters += text[i];
        } else if (isUpperCaseLetter(text[i])) {
            letters += text[i];
        } else {
            others += text[i];
        }
    }

    cout << digits << endl;
    cout << letters << endl;
    cout << others << endl;

    return 0;
}
