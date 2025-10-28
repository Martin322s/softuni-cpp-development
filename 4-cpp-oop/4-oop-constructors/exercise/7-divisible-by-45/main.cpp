#include "BigInt.h"
#include <iostream>

bool isDivisibleBy5(const BigInt & num) {
	const std::string & digits = num.getDigits();
	char lastDigit = digits.back();
	
	return lastDigit == '0' || lastDigit == '5';
}

bool isDivisibleBy9(const BigInt & num) {
	std::string digits = num.getDigits();
	
	size_t sum = 0;
	
	for(char c : digits) {
		sum += (c - '0');
	}
	
	return sum % 9 == 0;
}

bool isDivisibleBy45(const BigInt & s) {
	return isDivisibleBy5(s) && isDivisibleBy9(s);
}


int main() {
	std::string firstBigInt, secondBigInt;
	getline(std::cin, firstBigInt);
	getline(std::cin, secondBigInt);
	
	BigInt s(firstBigInt);
	BigInt e(secondBigInt);
	
	for(; s < e;) {
		if (isDivisibleBy45(s)) {
			std::cout << s << std::endl;
		}
		
		s += 1;
	}
	
	return 0;
}
