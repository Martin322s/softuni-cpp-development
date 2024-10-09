#include <iostream>
using namespace std;

int main() {
	const double PEN_PACKAGE_PRICE = 5.80;
	const double MARKER_PACKAGE_PRICE = 7.20;
	const double PREPARATION_PRICE_PER_LITER = 1.20;
	
	int penPackagesCount, markerPackagesCount, preparationLiters, percentDiscount;
	double totalPensPrice, totalMarkersPrice, totalPreparationPrice;
	double totalSum, totalSumWithDiscount;
	
	cin >> penPackagesCount;
	cin >> markerPackagesCount;
	cin >> preparationLiters;
	cin >> percentDiscount;
	
	totalPensPrice = penPackagesCount * PEN_PACKAGE_PRICE;
	totalMarkersPrice = markerPackagesCount * MARKER_PACKAGE_PRICE;
	totalPreparationPrice = preparationLiters * PREPARATION_PRICE_PER_LITER;
	
	totalSum = totalPensPrice + totalMarkersPrice + totalPreparationPrice;
	totalSumWithDiscount = totalSum - (totalSum * (percentDiscount / 100));
	
	cout << totalSumWithDiscount << endl;
	
	return 0;
}
