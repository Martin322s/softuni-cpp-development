#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int count = 0;
    string word, result[100] = {}, words[100] = {};
    cin >> word;

    while(word != "end" && count <= 100) {
        words[count] = word;
        reverse(word.begin(), word.end());
        result[count] = word;
        count++;

        cin >> word;
    }

    for (int i = 0; i < count; i++) {
        cout << words[i] << " = " << result[i] << endl;
    }

    return 0;
}
