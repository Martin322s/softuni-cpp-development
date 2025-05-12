#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, rotations;
    cin >> n;
    int arr[100];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cin >> rotations;
    rotations %= n;

    for (int i = 0; i < n; i++)
        cout << arr[(i + rotations) % n] << " ";

    return 0;
}
