#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int days, pointsToCover, swimmersCount;
	cin >> days >> pointsToCover >> swimmersCount;
	
	double hotelPrice, participationPrice;
	double totalPoints = 0.0;
	
	cin >> hotelPrice >> participationPrice;
	
	double points[days] = {};
	
	for (int i = 0; i < days; i++) {
		double currDayPoints;
		cin >> currDayPoints;
		
		totalPoints += currDayPoints;
		points[i] = currDayPoints;
	}
	
	for (int i = 1; i < days; i++) {
		double currPoints = points[i - 1];
		totalPoints += (currPoints * 0.05);
	}
	
	double discountPercent;
	string result = "";
	
	if (totalPoints >= pointsToCover) {
		discountPercent = 0.75;
		result = "The championship was successful!";
	} else {
		discountPercent = 0.90;
		result = "The championship was not successful.";
	}
	
	double hotelFee = days * (swimmersCount * hotelPrice);
	double participationFee = swimmersCount * participationPrice;
	
	double totalFee = (hotelFee + participationFee) * discountPercent;
	
	cout << fixed << setprecision(2) << "Money left to pay: " << totalFee << " BGN." << endl;
	cout << result << endl;
	
	return 0;
}
