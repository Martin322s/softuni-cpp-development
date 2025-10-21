#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[100], sum = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    int average = sum / n;

    for (int i = 0; i < n; i++) {
        if (arr[i] >= average) {
            cout << arr[i] << " ";
        }
    }

    return 0;
}
