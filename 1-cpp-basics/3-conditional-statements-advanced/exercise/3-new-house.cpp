#include <iostream>
using namespace std;

int main() {
    string flowerType;
    int flowerCount;
    double budget;

    cin >> flowerType;
    cin >> flowerCount;
    cin >> budget;

    double pricePerFlower = 0.0;

    if (flowerType == "Roses") {
        pricePerFlower = 5.0;
        if (flowerCount > 80) {
            pricePerFlower *= 0.90;
        }
    } else if (flowerType == "Dahlias") {
        pricePerFlower = 3.80;
        if (flowerCount > 90) {
            pricePerFlower *= 0.85;
        }
    } else if (flowerType == "Tulips") {
        pricePerFlower = 2.80;
        if (flowerCount > 80) {
            pricePerFlower *= 0.85;
        }
    } else if (flowerType == "Narcissus") {
        pricePerFlower = 3.0;
        if (flowerCount < 120) {
            pricePerFlower *= 1.15;
        }
    } else if (flowerType == "Gladiolus") {
        pricePerFlower = 2.50;
        if (flowerCount < 80) {
            pricePerFlower *= 1.20;
        }
    } else {
        cout << "Invalid flower type!" << endl;
        return 0;
    }

    double totalPrice = flowerCount * pricePerFlower;

    cout.setf(ios::fixed);
    cout.precision(2);
    
    if (budget >= totalPrice) {
        double moneyLeft = budget - totalPrice;
        cout << "Hey, you have a great garden with " << flowerCount << " " 
             << flowerType << " and " << moneyLeft << " leva left." << endl;
    } else {
        double moneyNeeded = totalPrice - budget;
        cout << "Not enough money, you need " << moneyNeeded << " leva more." << endl;
    }

    return 0;
}
