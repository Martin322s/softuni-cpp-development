#include <iostream>
#include <string>

using namespace std;

int main() {
    string text, findStr, replaceStr;
    getline(cin, text);
    getline(cin, findStr);
    getline(cin, replaceStr);

    size_t pos = 0;
    while ((pos = text.find(findStr, pos)) != string::npos) {
        text.replace(pos, findStr.length(), replaceStr);
        pos += replaceStr.length();
    }

    cout << text << endl;
    return 0;
}
