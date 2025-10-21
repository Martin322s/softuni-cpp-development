#include <iostream>
#include <string>
using namespace std;

void printIntegerSign(int number) {
	string sign = "";
		
	if (number > 0) {
		cout << "The number " << number << " is " << "positive." << endl;
	} else if (number < 0) {
		cout << "The number " << number << " is " << "negative." << endl;
	} else {
		cout << "The number " << number << " is " << "zero." << endl;
	}
}

int main() {
	int number;
	cin >> number;
	
	printIntegerSign(number);
	
	return 0;
}
