#include <iostream>
#include <stack>
#include <sstream>
#include <string>
#include <climits>

using namespace std;

int main() {
	stack<int> numbers;
	
	int N, S, X, number;
	
	string firstLine;
	getline(cin, firstLine);
	
	istringstream istr(firstLine);
	istr >> N >> S >> X;
	
	string secondLine;
	getline(cin, secondLine);
	istringstream stri(secondLine);
	
	while(stri >> number)
		numbers.push(number);
		
	for(int i = 0; i < S; i++) {
		numbers.pop();
	}
	
	if (!numbers.size()) {
		cout << 0 << endl;
		return 0;
	}
	
	int smallestNumber = INT_MAX;
	
	while(numbers.size()) {
		int num = numbers.top(); 
		numbers.pop();
		
		if (num == X) {
			cout << "true";
			cout << endl;
			
			return 0;
		} else if(num < smallestNumber) {
			smallestNumber = num;
		}
	}
	
	cout << smallestNumber;
	cout << endl;
	
	return 0;
}
