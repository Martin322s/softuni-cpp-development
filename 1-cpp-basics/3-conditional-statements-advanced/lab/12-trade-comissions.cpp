#include <iostream>
using namespace std;

int main() {
    string city;
    double sales, commission = -1.0;

    cin >> city;
    cin >> sales;

    if (sales < 0) {
        cout << "error" << endl;
        return 0;
    }

    if (city == "Sofia") {
        if (sales <= 500) commission = 0.05;
        else if (sales <= 1000) commission = 0.07;
        else if (sales <= 10000) commission = 0.08;
        else commission = 0.12;
    } else if (city == "Varna") {
        if (sales <= 500) commission = 0.045;
        else if (sales <= 1000) commission = 0.075;
        else if (sales <= 10000) commission = 0.10;
        else commission = 0.13;
    } else if (city == "Plovdiv") {
        if (sales <= 500) commission = 0.055;
        else if (sales <= 1000) commission = 0.08;
        else if (sales <= 10000) commission = 0.12;
        else commission = 0.145;
    }

    if (commission != -1.0) {
        double totalCommission = sales * commission;
         cout.setf(ios::fixed);
        cout.precision(2);
        
        cout << totalCommission << endl;
    } else {
        cout << "error" << endl;
    }

    return 0;
}
