#include <iostream>
#include <string>

using namespace std;

int main() {
    string text, result = "";
    getline(cin, text);

    int index = 0;

    while (index < text.length()) {
        int intervalIndex = text.find(" ", index);

        if (intervalIndex == string::npos) {
            intervalIndex = text.length();
        }

        string currentWord = text.substr(index, intervalIndex - index);

        for (int i = 0; i < currentWord.length(); i++) {
            result += currentWord;
        }

        index = intervalIndex + 1;
    }

    cout << result;

    cout << endl;

    return 0;
}
