#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {
	int currValue = 0, prevValue = 0, temp = 0;
	string chars;
	string value;
	getline(cin, chars);
	
	istringstream buffer(chars);
	
	while(buffer >> value) {
		if (value == "+") {
			temp = prevValue;
			prevValue = currValue;
			currValue = temp + prevValue;
		} else if (value == "-") {
			temp = prevValue;
			prevValue = currValue;
			currValue = temp - prevValue;
		} else if (value == "*") {
			temp = prevValue;
			prevValue = currValue;
			currValue = temp * prevValue;
		} else if (value == "/") {
			temp = prevValue;
			prevValue = currValue;
			currValue = temp / prevValue;
		} else {
			prevValue = currValue;
			currValue = stoi(value);
		}
	}
	
	cout << currValue << " " << prevValue << endl;
	
	return 0;
}
