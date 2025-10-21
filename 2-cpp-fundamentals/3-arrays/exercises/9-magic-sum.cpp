#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, target;
    cin >> n;
    int arr[100];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cin >> target;

    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (arr[i] + arr[j] == target)
                cout << arr[i] << " " << arr[j] << endl;

    return 0;
}
