#include <iostream>
#include <string>

using namespace std;

string encryptText(const string& text) {
    string result = "";

    for (const char element : text) {
        result += element + 3;
    }

    return result;
}

int main() {
    string input;
    getline(cin, input);

    string encryptedText = encryptText(input);

    cout << encryptedText;

    cout << endl;

    return 0;
}
