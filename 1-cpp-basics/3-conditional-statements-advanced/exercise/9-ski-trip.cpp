#include <iostream>
using namespace std;

int main() {
    int days;
    string roomType, feedback;
    double pricePerNight = 0.0;

    cin >> days;
    cin.ignore();
    getline(cin, roomType);
    cin >> feedback;

    int nights = days - 1;
    if (roomType == "room for one person") {
        pricePerNight = 18.00;
    } else if (roomType == "apartment") {
        pricePerNight = 25.00;
    } else if (roomType == "president apartment") {
        pricePerNight = 35.00;
    }

    double totalPrice = pricePerNight * nights;

    if (roomType == "apartment") {
        if (days > 15) {
            totalPrice *= 0.50;
        } else if (days >= 10) {
            totalPrice *= 0.65;
        } else {
            totalPrice *= 0.70;
        }
    } else if (roomType == "president apartment") {
        if (days > 15) {
            totalPrice *= 0.80;
        } else if (days >= 10) {
            totalPrice *= 0.85;
        } else {
            totalPrice *= 0.90;
        }
    }

    if (feedback == "positive") {
        totalPrice *= 1.25;
    } else if (feedback == "negative") {
        totalPrice *= 0.90;
    }

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << "The total price for the stay is: " << totalPrice << " lv." << endl;

    return 0;
}
