#include <iostream>
#include <string>
using namespace std;

string numberToWord(int number) {
    switch(number) {
        case 0: return "zero";
        case 1: return "one";
        case 2: return "two";
        case 3: return "three";
        case 4: return "four";
        case 5: return "five";
        case 6: return "six";
        case 7: return "seven";
        case 8: return "eight";
        case 9: return "nine";
    }
    return "";
}

string decimalToWord(int number) {
    switch(number) {
        case 2: return "twenty";
        case 3: return "thirty";
        case 4: return "forty";
        case 5: return "fifty";
        case 6: return "sixty";
        case 7: return "seventy";
        case 8: return "eighty";
        case 9: return "ninety";
    }
    return "";
}

string teensToWord(int number) {
    switch(number) {
        case 10: return "ten";
        case 11: return "eleven";
        case 12: return "twelve";
        case 13: return "thirteen";
        case 14: return "fourteen";
        case 15: return "fifteen";
        case 16: return "sixteen";
        case 17: return "seventeen";
        case 18: return "eighteen";
        case 19: return "nineteen";
    }
    return "";
}

int main() {
    int number;
    cin >> number;

    if (number == 0) {
        cout << numberToWord(number) << endl;
        return 0;
    }

    int ones = number % 10;
    int tens = (number / 10) % 10;
    int hundreds = (number / 100) % 10;
    int thousands = (number / 1000) % 10;

    if (thousands)
        cout << numberToWord(thousands) << " thousand ";

    if (hundreds)
        cout << numberToWord(hundreds) << " hundred ";

    if (tens == 1) {
        cout << teensToWord(tens * 10 + ones);
    } else {
        if (tens > 1)
            cout << decimalToWord(tens) << " ";
        if (ones)
            cout << numberToWord(ones);
    }

    cout << endl;

    return 0;
}
