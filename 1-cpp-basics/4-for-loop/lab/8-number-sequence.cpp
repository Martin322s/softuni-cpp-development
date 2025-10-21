#include <iostream>
#include <climits>
using namespace std;

int main() {
    int maxNumber = INT_MIN;
    int minNumber = INT_MAX;
    
    int integersCount;
    cin >> integersCount;

    for (int i = 0; i < integersCount; i++) {
        int currentInteger;
        cin >> currentInteger;
        
        if (currentInteger > maxNumber) {
            maxNumber = currentInteger;
        }
        
        if (currentInteger < minNumber) {
            minNumber = currentInteger;
        }
    }
    
    cout << "Max number: " << maxNumber << endl;
    cout << "Min number: " << minNumber << endl;

    return 0;
}
