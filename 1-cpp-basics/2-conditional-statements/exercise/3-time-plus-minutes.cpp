#include <iostream>
using namespace std;

int main() {
	int startHours, startMinutes;
	cin >> startHours >> startMinutes;
	
	startMinutes += 15;
	
	if (startMinutes >= 60) {
		startMinutes -= 60;
		startHours++;
	}
	
	if (startHours >= 24) {
		startHours = 0;
	}
	
	cout << startHours << (startMinutes < 10 ? ":0" : ":") << startMinutes << endl;
	
	return 0;
}
