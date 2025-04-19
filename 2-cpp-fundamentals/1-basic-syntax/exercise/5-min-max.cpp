#include <iostream>
#include <string>
#include <climits>
using namespace std;

int main() {
	int numbersCount;
	cin >> numbersCount;
	
	int minNumber = INT_MAX;
	int maxNumber = INT_MIN;
	
	for (int i = 0; i < numbersCount; i++) {
		int currentNumber;
		cin >> currentNumber;
		
		if (currentNumber < minNumber)
			minNumber = currentNumber;
			
		if (currentNumber > maxNumber)
			maxNumber = currentNumber;
	}
	
	cout << minNumber << " " << maxNumber << endl;
	
	return 0;
}
