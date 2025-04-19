#include <iostream>
using namespace std;

int main() {
    int start, end;
    cin >> start >> end;

    int sum = 0;

    for (int i = start; i <= end; i++) {
        cout << i << " ";
        sum += i;
    }

    cout << endl << "Sum: " << sum << endl;

    return 0;
}
