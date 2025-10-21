#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int days, hours;
    double total = 0.0;

    cin >> days >> hours;

    for (int day = 1; day <= days; ++day) {
        double dailyTotal = 0.0;
        for (int hour = 1; hour <= hours; ++hour) {
            if (day % 2 == 0 && hour % 2 != 0) {
                dailyTotal += 2.50;
            } else if (day % 2 != 0 && hour % 2 == 0) {
                dailyTotal += 1.25;
            } else {
                dailyTotal += 1.00;
            }
        }
        cout << "Day: " << day << " - " << fixed << setprecision(2) << dailyTotal << " leva" << endl;
        total += dailyTotal;
    }

    cout << "Total: " << fixed << setprecision(2) << total << " leva" << endl;

    return 0;
}
