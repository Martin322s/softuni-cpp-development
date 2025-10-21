#include <iostream>
#include <string>

using namespace std;

int main() {
    string input, result = "";
    cin >> input;

    result += input[0];

    for (int i = 0; i < input.length(); i++) {
        char currentSymbol = input[i];
        char nextSymbol = input [i + 1];

        if (nextSymbol) {
            if (nextSymbol != currentSymbol) {
                result += nextSymbol;
            }
        }
    }

    cout << result;

    cout << endl;

    return 0;
}
