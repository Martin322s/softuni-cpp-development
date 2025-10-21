#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isVowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int main() {
    string input;
    getline(cin, input);

    string result;
    char prev = '\0';

    for (char c : input) {
        if (c == prev && !isVowel(c)) {
            continue;
        }

        result += c;
        prev = c;
    }

    cout << result << endl;
    return 0;
}
