#include <iostream>
using namespace std;

int main() {
	double const 
		CHICKEN_MENU = 10.35, 
		FISH_MENU = 12.40, 
		VEGETARIAN_MENU = 8.15,
		DELIVERY_PRICE = 2.50;
	
	double chickenMenuPrice, fishMenuPrice, vegetarianMenuPrice;
	double totalMenuPrice, dessertPrice, totalPrice;
	
	int chickenMenuCount, fishMenuCount, vegetarianCount;
	cin >> chickenMenuCount >> fishMenuCount >> vegetarianCount;
	
	chickenMenuPrice = chickenMenuCount * CHICKEN_MENU;
	fishMenuPrice = fishMenuCount * FISH_MENU;
	vegetarianMenuPrice = vegetarianCount * VEGETARIAN_MENU;
	
	totalMenuPrice = chickenMenuPrice + fishMenuPrice + vegetarianMenuPrice;
	dessertPrice = totalMenuPrice * 0.20;
	totalPrice = totalMenuPrice + dessertPrice + DELIVERY_PRICE;
	
	cout << totalPrice;
	
	return 0;
}
