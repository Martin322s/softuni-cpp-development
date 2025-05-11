#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[100];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cout << arr[i] * arr[j] << " ";

    return 0;
}
