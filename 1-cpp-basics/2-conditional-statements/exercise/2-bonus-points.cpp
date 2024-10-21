#include <iostream>
using namespace std;

int main() {
	double bonusPoints = 0.0;
	
	int basePoints;
	cin >> basePoints;
	
	if (basePoints <= 100) {
		bonusPoints = 5.0;
	} else if (basePoints > 100 && basePoints <= 1000) {
		bonusPoints = basePoints * 0.20;
	} else {
		bonusPoints = basePoints * 0.10;
	}
	
	if (basePoints % 2 == 0) {
		bonusPoints += 1.0;
	}
	
	if (basePoints % 10 == 5) {
		bonusPoints += 2.0;
	}
	
	cout << bonusPoints << endl;
	cout << basePoints + bonusPoints << endl;
	
	return 0;
}
