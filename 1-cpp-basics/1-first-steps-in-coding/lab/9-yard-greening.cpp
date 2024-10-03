#include <iostream>
using namespace std;

int main() {
	const double YARD_GREENING_PRICE = 7.61;
	const double DISCOUNT_PERCENT = 0.18;
	double totalPrice, discount;
	
	double yardSize;
	cin >> yardSize;
	
	totalPrice = yardSize * YARD_GREENING_PRICE;
	discount = totalPrice * DISCOUNT_PERCENT;
	
	totalPrice -= discount;
	
	cout << "The final price is: " << totalPrice << " lv." << endl;
	cout << "The discount is: " << discount << " lv." << endl;
	
	return 0;
}
