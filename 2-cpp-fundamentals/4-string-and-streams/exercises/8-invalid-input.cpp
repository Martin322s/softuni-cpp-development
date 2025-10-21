#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main() {
    string line;
    getline(cin, line);

    istringstream iss(line);
    string token;
    int sum = 0;
    vector<string> words;

    while (iss >> token) {
        try {
            sum += stoi(token);
        } catch (...) {
            words.push_back(token);
        }
    }

    cout << sum << endl;

    for (const string& word : words) {
        cout << word << " ";
    }

    cout << endl;
    return 0;
}
