#include <iostream>
using namespace std;

int main() {
    double budget;
    string season;
    int fishers;

    cin >> budget;
    cin >> season;
    cin >> fishers;

    double rent = 0.0;

    if (season == "Spring") {
        rent = 3000;
    } else if (season == "Summer" || season == "Autumn") {
        rent = 4200;
    } else if (season == "Winter") {
        rent = 2600;
    }

    if (fishers <= 6) {
        rent *= 0.90;
    } else if (fishers <= 11) {
        rent *= 0.85;
    } else {
        rent *= 0.75;
    }

    if (fishers % 2 == 0 && season != "Autumn") {
        rent *= 0.95;
    }

    cout.setf(ios::fixed);
    cout.precision(2);
    
    if (budget >= rent) {
        double moneyLeft = budget - rent;
        cout << "Yes! You have " << moneyLeft << " leva left." << endl;
    } else {
        double moneyNeeded = rent - budget;
        cout << "Not enough money! You need " << moneyNeeded << " leva." << endl;
    }

    return 0;
}
