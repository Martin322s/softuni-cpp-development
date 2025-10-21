#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[100], freq[10] = {0};

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        freq[arr[i]]++;
    }

    int maxFreq = 0;
    for (int i = 0; i < 10; i++)
        if (freq[i] > maxFreq)
            maxFreq = freq[i];

    for (int i = 0; i < 10; i++)
        if (freq[i] == maxFreq)
            cout << i << " ";

    return 0;
}
