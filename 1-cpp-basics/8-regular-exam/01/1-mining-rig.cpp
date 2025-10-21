#include <iostream>
#include <cmath>
using namespace std;

int main() {
	const int VIDEO_CARD_COUNT = 13;
	const int TRANSITION_COUNT = 13;
	const int COMPONENTS_TOTAL_PRICE = 1000;
	
	int videoCardPrice, transitionPrice;
	cin >> videoCardPrice >> transitionPrice;
	
	double electricityForDay, dailyProfit;
	cin >> electricityForDay >> dailyProfit;
	
	int totalCardsPrice = VIDEO_CARD_COUNT * videoCardPrice;
	int totalTransitionPrice = TRANSITION_COUNT * transitionPrice;
	int totalSpentMoney = totalCardsPrice + totalTransitionPrice + COMPONENTS_TOTAL_PRICE;
	double dailyCardProfit = dailyProfit - electricityForDay;
	double totalDailyProft = dailyCardProfit * VIDEO_CARD_COUNT;
	
	double returnDays = ceil(totalSpentMoney / totalDailyProft);
	
	cout << totalSpentMoney << endl;
	cout << returnDays << endl;
	
	return 0;
}
