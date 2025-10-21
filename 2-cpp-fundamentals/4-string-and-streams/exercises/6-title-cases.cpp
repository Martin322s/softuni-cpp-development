#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string text;
    getline(cin, text);

    bool newWord = true;

    for (char& ch : text) {
        if (isalpha(ch)) {
            if (newWord) {
                ch = toupper(ch);
                newWord = false;
            } else {
                ch = tolower(ch);
            }
        } else {
            newWord = true;
        }
    }

    cout << text << endl;
    return 0;
}
