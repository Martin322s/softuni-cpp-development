#include <iostream>
#include <string>

using namespace std;

int main() {
    string strOne, strTwo;
    cin >> strOne >> strTwo;

    int sum = 0;
    int len = max(strOne.length(), strTwo.length());

    for (int i = 0; i < len; i++) {
        if (i < strOne.length() && i < strTwo.length()) {
            sum += strOne[i] * strTwo[i];
        } else if (i < strOne.length()) {
            sum += strOne[i];
        } else if (i < strTwo.length()) {
            sum += strTwo[i];
        }
    }

    cout << sum << endl;
    return 0;
}
