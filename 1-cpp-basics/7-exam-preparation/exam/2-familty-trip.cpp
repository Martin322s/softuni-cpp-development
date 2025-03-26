#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double budget, nightPrice;
    int nights, extraExpensesPercentage;

    cin >> budget >> nights >> nightPrice >> extraExpensesPercentage;

    if (nights > 7) {
        nightPrice *= 0.95; // 5% discount
    }

    double expenses = nights * nightPrice;
    expenses += budget * (extraExpensesPercentage / 100.0);

    cout << fixed << setprecision(2);
    if (budget >= expenses) {
        cout << "Ivanovi will be left with " << budget - expenses << " leva after vacation." << endl;
    } else {
        cout << expenses - budget << " leva needed." << endl;
    }

    return 0;
}
