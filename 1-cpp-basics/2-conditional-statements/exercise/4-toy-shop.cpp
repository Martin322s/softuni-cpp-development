#include <iostream>
using namespace std;

int main() {
	const double PUZZLE_PRICE = 2.60;
	const double TALKING_DOLL_PRICE = 3.00;
	const double TEDDY_BEAR_PRICE = 4.10;
	const double MINION_PRICE = 8.20;
	const double TRUCK_PRICE = 2.00;
	
	double tripPrice, discount;
	int puzzlesCount, dollsCount, bearsCount, minionsCount, trucksCount, toysCount;
	cin >> tripPrice >> puzzlesCount >> dollsCount >> bearsCount >> minionsCount >> trucksCount;
	
	double puzzlesPrice, dollsPrice, bearsPrice, minionsPrice, trucksPrice, totalPrice;
	puzzlesPrice = puzzlesCount * PUZZLE_PRICE;
	dollsPrice = dollsCount * TALKING_DOLL_PRICE;
	bearsPrice = bearsCount * TEDDY_BEAR_PRICE;
	minionsPrice = minionsCount * MINION_PRICE;
	trucksPrice = trucksCount * TRUCK_PRICE;
	
	totalPrice = puzzlesPrice + dollsPrice + bearsPrice + minionsPrice + trucksPrice;
	toysCount = puzzlesCount + dollsCount + bearsCount + minionsCount + trucksCount;
	
	if (toysCount >= 50) {
		discount = totalPrice * 0.25;
		totalPrice -= discount;
	}
	
	discount = totalPrice * 0.10;
	totalPrice -= discount;
	
	cout.setf(ios::fixed);
	cout.precision(2);
	
	if (totalPrice >= tripPrice) {
		cout << "Yes! " << (totalPrice - tripPrice) << " lv left." << endl;
	}
	else {
		cout << "Not enough money! " << (tripPrice - totalPrice) << " lv needed." << endl;
	}
	
	return 0;
}
