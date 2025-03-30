#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    double budget, price;
    string product;
    int productCount = 0;
    double totalPrice = 0.0;

    cin >> budget;
    cin.ignore(); 

    while (getline(cin, product) && product != "Stop") {
        cin >> price;
        cin.ignore();

        productCount++;
        if (productCount % 3 == 0) {
            price /= 2.0; 
        }

        if (budget >= price) {
            budget -= price;
            totalPrice += price;
        } else {
            cout << "You don't have enough money!" << endl;
            cout << "You need " << fixed << setprecision(2) << price - budget << " leva!" << endl;
            return 0;
        }
    }

    cout << "You bought " << productCount << " products for " << fixed << setprecision(2) << totalPrice << " leva." << endl;

    return 0;
}
