#include <iostream>
using namespace std;

int main() {
    string month;
    int nights;
    double studioPricePerNight = 0.0, apartmentPricePerNight = 0.0;

    cin >> month;
    cin >> nights;

    if (month == "May" || month == "October") {
        studioPricePerNight = 50.0;
        apartmentPricePerNight = 65.0;

        if (nights > 14) {
            studioPricePerNight *= 0.70;
        } else if (nights > 7) {
            studioPricePerNight *= 0.95;
        }
    } else if (month == "June" || month == "September") {
        studioPricePerNight = 75.20;
        apartmentPricePerNight = 68.70;

        if (nights > 14) {
            studioPricePerNight *= 0.80;
        }
    } else if (month == "July" || month == "August") {
        studioPricePerNight = 76.0;
        apartmentPricePerNight = 77.0;
    }

    if (nights > 14) {
        apartmentPricePerNight *= 0.90;
    }

    double totalStudioPrice = studioPricePerNight * nights;
    double totalApartmentPrice = apartmentPricePerNight * nights;

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << "Apartment: " << totalApartmentPrice << " lv." << endl;
    cout << "Studio: " << totalStudioPrice << " lv." << endl;

    return 0;
}
