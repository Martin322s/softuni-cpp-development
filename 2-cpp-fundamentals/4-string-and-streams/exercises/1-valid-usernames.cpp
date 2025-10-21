#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool isValid(const string& username) {
    if (username.length() < 3 || username.length() > 16)
        return false;

    for (char ch : username) {
        if (!isalnum(ch) && ch != '-' && ch != '_')
            return false;
    }

    return true;
}

int main() {
    string input;
    getline(cin, input);

    size_t pos = 0;
    while (pos < input.length()) {
        size_t next = input.find(", ", pos);
        string token = input.substr(pos, next - pos);

        if (isValid(token))
            cout << token << endl;

        if (next == string::npos) break;
        pos = next + 2;
    }

    return 0;
}
