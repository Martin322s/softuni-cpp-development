#include <iostream>
using namespace std;

int main() {
	const double DOG_FOOD_PRICE = 2.50;
	const double CAT_FOOD_PRICE = 4.00;
	
	int dogFoodCount, catFoodCount;
	double totalPrice;
	
	cin >> dogFoodCount;
	cin >> catFoodCount;
	
	totalPrice = (dogFoodCount * DOG_FOOD_PRICE) + (catFoodCount * CAT_FOOD_PRICE);
	
	cout << totalPrice << " lv." << endl;
	
	return 0;
}
