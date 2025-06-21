#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();

    unordered_set<string> seen;

    for (int i = 0; i < n; ++i) {
        string name;
        getline(cin, name);

        if (seen.find(name) == seen.end()) {
            cout << name << endl;
            seen.insert(name);
        }
    }

    return 0;
}
