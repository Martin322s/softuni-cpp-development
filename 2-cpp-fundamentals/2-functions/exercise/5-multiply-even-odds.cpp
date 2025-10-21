#include <iostream>
using namespace std;

int sumOfOddNumbers(int number) {
	int sum = 0;
	
	while(number) {
		int digit = number % 10;
		
		if (digit % 2 != 0) {
			sum += digit;
		}
		
		number /= 10;
	}
	
	return sum;
}

int sumOfEvenNumbers(int number) {
	int sum = 0;
	
	while(number) {
		int digit = number % 10;
		
		if (digit % 2 == 0) {
			sum += digit;
		}
		
		number /= 10;
	}
	
	return sum;
}

int main() {
	int number;
	cin >> number;
	
	int sumOfOdds = sumOfOddNumbers(number);
	int sumOfEvens = sumOfEvenNumbers(number);
	int result = sumOfOdds * sumOfEvens;
	
	cout << result;
	cout << endl;
		
	return 0;
}
