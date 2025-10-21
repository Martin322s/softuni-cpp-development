#include <iostream>
using namespace std;

int main() {
	const double FOOD_PRICE_FOR_ONE_KG = 12.45;
	
	int smallCatsGroupOne = 0;
	int bigCatsGroupTwo = 0;
	int largeCatsGroupThree = 0;
	
	int catsCount;
	cin >> catsCount;
	
	double foodQuantity = 0;
	
	for (int i = 0; i < catsCount; i++) {
		int currentCat;
		cin >> currentCat;
		
		if (currentCat >= 100 && currentCat < 200) {
			smallCatsGroupOne++;
			foodQuantity += currentCat;
		} else if (currentCat >= 200 && currentCat < 300) {
			bigCatsGroupTwo++;
			foodQuantity += currentCat;
		} else if (currentCat >= 300 && currentCat < 400) {
			largeCatsGroupThree++;
			foodQuantity += currentCat;
		}
	}
	
	foodQuantity /= 1000;
	
	double totalPrice = foodQuantity * FOOD_PRICE_FOR_ONE_KG;
	
	cout.setf(ios::fixed);
	cout.precision(2);
	
	cout << "Group 1: " << smallCatsGroupOne << " cats." << endl;
	cout << "Group 2: " << bigCatsGroupTwo << " cats." << endl;
	cout << "Group 3: " << largeCatsGroupThree << " cats." << endl;
	cout << "Price for food per day: " << totalPrice << " lv." << endl;
	
	return 0;
}
