#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void printTotalPrice(string product, int quantity) {
    double pricePerUnit = 0.0;

    if (product == "coffee") {
        pricePerUnit = 1.50;
    } else if (product == "water") {
        pricePerUnit = 1.00;
    } else if (product == "coke") {
        pricePerUnit = 1.40;
    } else if (product == "snacks") {
        pricePerUnit = 2.00;
    }

    double total = pricePerUnit * quantity;

    cout << fixed << setprecision(2) << total << endl;
}

int main() {
    string product;
    int quantity;

    cin >> product >> quantity;

    printTotalPrice(product, quantity);

    return 0;
}
