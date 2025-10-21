#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
	int inputNumber;
	
	do {
		cin >> inputNumber;
		
		if (inputNumber % 2 == 0) {
			cout << "The number is: " << abs(inputNumber) << endl;
		} else {
			cout << "Please write an even number." << endl;
		}
	} while (inputNumber % 2 != 0);
	
	return 0;
}
