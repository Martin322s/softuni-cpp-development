#include <iostream>
#include <stack>
#include <sstream>

using namespace std;

int main() {
	stack<int> numbers;
	string inputNumbers;
	getline(cin, inputNumbers);
	
	istringstream integers(inputNumbers);
	
	int num, sum = 0;
	
	while(integers >> num) {
		numbers.push(num);
	}
	
	string input;
	getline(cin, input);
	
	while(input != "end") {
		istringstream command(input);
		string type;
		int numOne, numTwo;
		command >> type;
		
		if (type == "add") {
			command >> numOne >> numTwo;
			numbers.push(numOne);
			numbers.push(numTwo);
		} else if (type == "remove") {
			command >> numOne;
			if (!numbers.empty() && numbers.size() >= numOne) {
				for (int i = 0; i < numOne; i++) {
					numbers.pop();
				}
			}
		}
		
		getline(cin, input);
	}
	
	while(!numbers.empty()) {
		sum += numbers.top();
		numbers.pop();
	}
	
	cout << sum;
	cout << endl;
	
	return 0;
}

