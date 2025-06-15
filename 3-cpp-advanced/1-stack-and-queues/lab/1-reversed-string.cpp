#include <iostream>
#include <stack>

using namespace std;

int main() {
	string text;
	getline(cin, text);
	
	stack<char> reversedString;
	
	for (char c : text) {
		reversedString.push(c);
	}
	
	while(!reversedString.empty()) {
		cout << reversedString.top();
		reversedString.pop();
	}
	
	cout << endl;

	return 0;
}

