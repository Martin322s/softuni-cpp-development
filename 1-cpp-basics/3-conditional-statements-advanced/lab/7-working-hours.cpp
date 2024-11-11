#include <iostream>
using namespace std;

int main() {
	int hour;
	string day;
	cin >> hour >> day;
	
	if (hour >= 10 && hour <= 18) {
		if (day == "Monday" || 
			day == "Tuesday" || 
			day == "Wednesday" || 
			day == "Thursday" || 
			day == "Friday" || 
			day == "Saturday"
		) {
			cout << "open" << endl;
		}
		else {
			cout << " closed" << endl;
		}
	} else {
		cout << " closed" << endl;
	}
	
	return 0;
}
