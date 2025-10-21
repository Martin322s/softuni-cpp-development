#include <iostream>
#include <string>
#include <sstream>
#include <stack>

using namespace std;

int main() {
	string expression;
	getline(cin, expression);
	istringstream istr(expression);
	
	stack<int> numbers;
	stack<char> operations;
	
	int number;
	char op;
	istr >> number;
	numbers.push(number);
	
	while(istr >> op) {
		istr >> number;
		operations.push(op);
		numbers.push(number);
	}
	
	int sum = 0;
	
	while(operations.size()) {
		char op = operations.top(); operations.pop();
		number = numbers.top(); numbers.pop();
		
		switch(op) {
			case '+': sum += number; break;
			case '-': sum -= number; break;
		}
	}
	
	sum += numbers.top();
	
	cout << sum;
	cout << endl;
	
    return 0;
}
