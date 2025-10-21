#include <iostream>
#include <string>

using namespace std;

string daysOfWeek[7] = {
	"Monday",
	"Tuesday",
	"Wednesday",
	"Thursday",
	"Friday",
	"Saturday",
	"Sunday",
};

void printDayOfWeek(string days[], int number) {
	if (number < 1 || number > 7)
		cout << "Invalid day!";
	else
		cout << days[number - 1];
	
	cout << endl;
}

int main() {
	int num;
	cin >> num;
	
	printDayOfWeek(daysOfWeek, num);
	
	return 0;
}
