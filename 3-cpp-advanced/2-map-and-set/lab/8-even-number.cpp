#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    int n;
    cin >> n;

    unordered_map<int, int> freq;

    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        freq[num]++;
    }

    for (const auto& pair : freq) {
        if (pair.second % 2 == 0) {
            cout << pair.first << endl;
            break;
        }
    }

    return 0;
}
