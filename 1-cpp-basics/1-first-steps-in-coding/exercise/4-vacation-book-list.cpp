#include <iostream>
using namespace std;

int main() {
	int pagesCount, pagesPerHour, totalDaysCount;
	double hoursPerDay, totalReadTime;
	
	cin >> pagesCount;
	cin >> pagesPerHour;
	cin >> totalDaysCount;
	
	totalReadTime = pagesCount / pagesPerHour;
	hoursPerDay = totalReadTime / totalDaysCount;
	
	cout << totalReadTime;
	
	return 0;
}
