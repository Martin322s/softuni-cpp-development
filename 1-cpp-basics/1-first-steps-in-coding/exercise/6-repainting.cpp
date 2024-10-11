#include <iostream>
using namespace std;

int main() {
	const double PROTECTIVE_NYLON_PRICE = 1.50;
	const double PAINT_PRICE_PER_LITER = 14.50;
	const double PAINT_THINNER_PRICE = 5.00;
	
	int nylonQuantity, paintQuantity, thinnerLiters, workersHours;
	double totalPrice, nylonTotalPrice, paintTotalPrice, thinnerTotalPrice;
	double bagsPrice = 0.40, workersPrice;
	
	cin >> nylonQuantity;
	cin >> paintQuantity;
	cin >> thinnerLiters;
	cin >> workersHours;
	
	nylonTotalPrice = (nylonQuantity + 2) * PROTECTIVE_NYLON_PRICE;
	paintTotalPrice = (paintQuantity + (paintQuantity * 0.10)) * PAINT_PRICE_PER_LITER;
	thinnerTotalPrice = thinnerLiters * PAINT_THINNER_PRICE;
	
	totalPrice = nylonTotalPrice + paintTotalPrice + thinnerTotalPrice + bagsPrice;
	workersPrice = (totalPrice * 0.30)* workersHours;
	totalPrice += workersPrice;
	
	cout << totalPrice;
	
	return 0;
}
