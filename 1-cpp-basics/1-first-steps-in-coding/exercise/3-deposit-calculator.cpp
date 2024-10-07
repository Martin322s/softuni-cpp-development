#include <iostream>
using namespace std;

int main() {
    double depositSum, totalSum, annualInterestRate, monthlyInterest;
    int monthPeriod;

    cin >> depositSum;
    cin >> monthPeriod;
    cin >> annualInterestRate;

    annualInterestRate = annualInterestRate / 100.0;
    monthlyInterest = (depositSum * annualInterestRate) / 12.0;
    totalSum = depositSum + monthPeriod * monthlyInterest;

    cout << fixed << totalSum << endl;

    return 0;
}
