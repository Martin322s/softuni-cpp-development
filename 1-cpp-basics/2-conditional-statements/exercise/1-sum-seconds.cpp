#include <iostream>
using namespace std;

int main() {
	int timeOne, timeTwo, timeThree;
	cin >> timeOne >> timeTwo >> timeThree;
	
	int totalTime = timeOne + timeTwo + timeThree;
	int minutes = totalTime / 60;
	int seconds = totalTime % 60;
	
	if (seconds < 10) {
		cout << minutes << ":0" << seconds << endl;
	}
	else {
		cout << minutes << ":" << seconds << endl;
	}
	
	return 0;
}
