#include <iostream>
using namespace std;

int main() {
	int sum = 0, inputNumber;
	cin >> inputNumber;
	
	while (sum < inputNumber) {
		int currentNumber;
		cin >> currentNumber;
		sum += currentNumber;
	}
	
	cout << sum << endl;
	
	return 0;
}
