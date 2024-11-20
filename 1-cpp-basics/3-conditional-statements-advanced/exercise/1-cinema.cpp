#include <iostream>
using namespace std;

int main() {
    string projectionType;
    int rows, columns;

    cin >> projectionType;
    cin >> rows;
    cin >> columns;

    double price = 0.0;

    if (projectionType == "Premiere") {
        price = 12.00;
    } else if (projectionType == "Normal") {
        price = 7.50;
    } else if (projectionType == "Discount") {
        price = 5.00;
    } else {
        cout << "Invalid projection type!" << endl;
        return 0;
    }

    double totalIncome = rows * columns * price;
	cout.setf(ios::fixed);
	cout.precision(2);
	
    cout << totalIncome << endl;

    return 0;
}
