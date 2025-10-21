#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    double budget;
    string season;

    cin >> budget;
    cin >> season;

    string destination, typeOfStay;
    double spent = 0.0;
    if (budget <= 100) {
        destination = "Bulgaria";
        if (season == "summer") {
            spent = budget * 0.30;
            typeOfStay = "Camp";
        } else if (season == "winter") {
            spent = budget * 0.70;
            typeOfStay = "Hotel";
        }
    } else if (budget <= 1000) {
        destination = "Balkans";
        if (season == "summer") {
            spent = budget * 0.40;
            typeOfStay = "Camp";
        } else if (season == "winter") {
            spent = budget * 0.80;
            typeOfStay = "Hotel";
        }
    } else {
        destination = "Europe";
        spent = budget * 0.90;
        typeOfStay = "Hotel";
    }

    cout.setf(ios::fixed);
    cout.precision(2);
    
    cout << "Somewhere in " << destination << endl;
    cout << typeOfStay << " - " << spent << endl;

    return 0;
}
