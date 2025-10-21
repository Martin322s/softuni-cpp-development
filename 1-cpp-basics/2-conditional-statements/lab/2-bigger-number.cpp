#include <iostream>
using namespace std;

int main() {
	int firstNumber, secondNumber;
	cin >> firstNumber >> secondNumber;
	
	if (firstNumber > secondNumber) {
		cout << firstNumber << endl;
	} 
	else {
		cout << secondNumber << endl;
	}
	
	return 0;
}
