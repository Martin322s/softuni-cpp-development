#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[100];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    if (n < 2) {
        cout << "0";
        return 0;
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    int minDiff = abs(arr[1] - arr[0]);

    for (int i = 1; i < n; i++) {
        int diff = abs(arr[i] - arr[i - 1]);
        if (diff < minDiff)
            minDiff = diff;
    }

    cout << minDiff;
    return 0;
}
