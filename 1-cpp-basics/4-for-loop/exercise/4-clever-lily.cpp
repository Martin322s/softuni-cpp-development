#include <iostream>
using namespace std;

int main() {
    int age;
    double washingMachinePrice;
    int toyPrice;
    
    cin >> age >> washingMachinePrice >> toyPrice;
    
    int toysCount = 0;
    double savedMoney = 0;
    double moneyGift = 10.0;
    
    for (int i = 1; i <= age; ++i) {
        if (i % 2 == 0) {
            savedMoney += moneyGift;
            savedMoney -= 1;
            moneyGift += 10;
        } else {
            toysCount++;
        }
    }
    
    savedMoney += toysCount * toyPrice;
    
    cout.setf(ios::fixed);
    cout.precision(2);
    
    if (savedMoney >= washingMachinePrice) {
        cout << "Yes! " << savedMoney - washingMachinePrice << endl;
    } else {
        cout << "No! " << washingMachinePrice - savedMoney << endl;
    }
    
    return 0;
}
