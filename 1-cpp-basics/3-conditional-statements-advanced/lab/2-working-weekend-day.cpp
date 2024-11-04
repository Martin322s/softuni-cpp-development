#include <iostream>
using namespace std;

int main() {
	string dayOfWeek;
	cin >> dayOfWeek;
	
	if (dayOfWeek == "Monday") {
		cout << "Working day" << endl;
	} 
	else if (dayOfWeek == "Tuesday") {
		cout << "Working day" << endl;
	}
	else if (dayOfWeek == "Wednesday") {
		cout << "Working day" << endl;
	}
	else if (dayOfWeek == "Thursday") {
		cout << "Working day" << endl;
	}
	else if (dayOfWeek == "Friday") {
		cout << "Working day" << endl;
	}
	else if (dayOfWeek == "Saturday") {
		cout << "Weekend" << endl;
	}
	else if (dayOfWeek == "Sunday") {
		cout << "Weekend" << endl;
	}
	else {
		cout << "Error" << endl;
	}
	
	return 0;
}
