#include <iostream>
using namespace std;

int main() {
    double incomeTax;
    cin >> incomeTax;

    double sneakers = incomeTax * 0.6;
    double equipment = sneakers * 0.8;
    double basketball = equipment * 0.25;
    double accessories = basketball * 0.2;

    double finalPrice = incomeTax + sneakers + equipment + basketball + accessories;
    
    cout.setf(ios::fixed);
    cout.precision(2);

    cout << finalPrice << endl;

    return 0;
}

