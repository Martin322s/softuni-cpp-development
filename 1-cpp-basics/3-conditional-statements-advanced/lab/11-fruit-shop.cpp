#include <iostream>
using namespace std;

int main() {
    string product, day;
    double quantity, price = -1;

    cin >> product;
    cin >> day;
    cin >> quantity;

    if (day == "Monday" || day == "Tuesday" || day == "Wednesday" || 
        day == "Thursday" || day == "Friday") {
        if (product == "banana") price = 2.50;
        else if (product == "apple") price = 1.20;
        else if (product == "orange") price = 0.85;
        else if (product == "grapefruit") price = 1.45;
        else if (product == "kiwi") price = 2.70;
        else if (product == "pineapple") price = 5.50;
        else if (product == "grapes") price = 3.85;
    } else if (day == "Saturday" || day == "Sunday") {
        if (product == "banana") price = 2.70;
        else if (product == "apple") price = 1.25;
        else if (product == "orange") price = 0.90;
        else if (product == "grapefruit") price = 1.60;
        else if (product == "kiwi") price = 3.00;
        else if (product == "pineapple") price = 5.60;
        else if (product == "grapes") price = 4.20;
    }

    if (price != -1) {
        double total = price * quantity;
        cout.setf(ios::fixed);
        cout.precision(2);
        
        cout << total << endl;
    } else {
        cout << "error" << endl;
    }

    return 0;
}
