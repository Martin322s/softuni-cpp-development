#include <iostream>
using namespace std;

int powerNumber(int number, int power) {
	int result = 1;
	
	for (int i = 1; i <= power; i++) {
		result *= number;
	}
	
	return result;
}

int main() {
	int number, power;
	cin >> number >> power;
	
	int result = powerNumber(number, power);
	
	cout << result << endl;
	
	return 0;
}
