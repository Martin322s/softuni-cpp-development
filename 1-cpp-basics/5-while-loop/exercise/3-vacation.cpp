#include <iostream>
#include <string>

using namespace std;

int main() {
    double vacationCost, availableMoney;
    cin >> vacationCost >> availableMoney;

    string action;
    double amount;
    int days = 0, spendDays = 0;

    while (availableMoney < vacationCost && spendDays < 5) {
        cin >> action >> amount;
        days++;

        if (action == "spend") {
            availableMoney -= amount;
            if (availableMoney < 0) availableMoney = 0;
            spendDays++;
        } else if (action == "save") {
            availableMoney += amount;
            spendDays = 0;
        }
    }

    if (spendDays == 5) {
        cout << "You can't save the money." << endl;
        cout << days << endl;
    } else {
        cout << "You saved the money for " << days << " days." << endl;
    }

    return 0;
}
