#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    string country;
    string souvenir;
    int quantity;

    cin >> country >> souvenir >> quantity;

    double price = 0.0;

    if (country == "Argentina") {
        if (souvenir == "flags") {
            price = 3.25;
        } else if (souvenir == "caps") {
            price = 7.20;
        } else if (souvenir == "posters") {
            price = 5.10;
        } else if (souvenir == "stickers") {
            price = 1.25;
        } else {
            cout << "Invalid stock!" << endl;
            return 0;
        }
    } else if (country == "Brazil") {
        if (souvenir == "flags") {
            price = 4.20;
        } else if (souvenir == "caps") {
            price = 8.50;
        } else if (souvenir == "posters") {
            price = 5.35;
        } else if (souvenir == "stickers") {
            price = 1.20;
        } else {
            cout << "Invalid stock!" << endl;
            return 0;
        }
    } else if (country == "Croatia") {
        if (souvenir == "flags") {
            price = 2.75;
        } else if (souvenir == "caps") {
            price = 6.90;
        } else if (souvenir == "posters") {
            price = 4.95;
        } else if (souvenir == "stickers") {
            price = 1.10;
        } else {
            cout << "Invalid stock!" << endl;
            return 0;
        }
    } else if (country == "Denmark") {
        if (souvenir == "flags") {
            price = 3.10;
        } else if (souvenir == "caps") {
            price = 6.50;
        } else if (souvenir == "posters") {
            price = 4.80;
        } else if (souvenir == "stickers") {
            price = 0.90;
        } else {
            cout << "Invalid stock!" << endl;
            return 0;
        }
    } else {
        cout << "Invalid country!" << endl;
        return 0;
    }

    double totalPrice = price * quantity;
    cout.setf(ios::fixed);
    cout.precision(2);

    cout << "Pepi bought " << quantity << " " << souvenir << " of " << country << " for " << totalPrice << " lv." << endl;

    return 0;
}
