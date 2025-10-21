#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int maxLen = 1, currentLen = 1, startIndex = 0;
    
    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) {
            currentLen++;
        } else {
            currentLen = 1;
        }
        if (currentLen >= maxLen) {
            maxLen = currentLen;
            startIndex = i - currentLen + 1;
        }
    }

    for (int i = 0; i < maxLen; i++)
        cout << arr[startIndex + i] << " ";

    return 0;
}
