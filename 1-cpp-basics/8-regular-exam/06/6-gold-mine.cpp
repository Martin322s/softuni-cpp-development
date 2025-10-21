#include <iostream>
using namespace std;

int main() {
	int locationsCount;
	cin >> locationsCount;
	
	for (int i = 0; i < locationsCount; i++) {
		double expectedAverageGold;
		int miningDays;
		double minedAverageGold = 0;
		cin >> expectedAverageGold >> miningDays;

		for (int j = 0; j < miningDays; j++) {
			double minedGold;
			cin >> minedGold;
			
			minedAverageGold += minedGold;
		}
		
		minedAverageGold /= miningDays;
		
		cout.setf(ios::fixed);
		cout.precision(2);
		
		if (minedAverageGold >= expectedAverageGold) {
			cout << "Good job! Average gold per day: " << minedAverageGold << "." << endl;
		} else {
			cout << "You need " << (expectedAverageGold - minedAverageGold) << " gold." << endl;
		}
	}
	
	return 0;
}
