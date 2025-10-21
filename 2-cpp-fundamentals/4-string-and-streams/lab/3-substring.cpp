#include <iostream>
#include <string>

using namespace std;

int main() {
    string pattern, text;
    cin >> pattern >> text;

    size_t pos = text.find(pattern);
    while (pos != string::npos) {
        text.replace(pos, pattern.length(), "");
        pos = text.find(pattern);
    }

    cout << text << endl;
    return 0;
}
