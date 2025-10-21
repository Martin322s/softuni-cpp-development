#include <iostream>
#include <queue>
#include <sstream>
#include <string>

using namespace std;

int main() {
	string line;
	getline(cin, line);
	istringstream istr(line);
	
	queue<int> numbers;
	int number;
	
	while(istr >> number)
		numbers.push(number);
	
	bool bFirst = true;
	
	while(numbers.size()) {
		number = numbers.front();
		numbers.pop();
		
		if (number % 2 == 0) {
			if (!bFirst) {
				cout << ", ";
			} else {
				bFirst = false;
			}
			
			cout << number;
		}
	}
	
	cout << endl;
	
	return 0;
}

