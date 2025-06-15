#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
	string line;
	getline(cin, line);
	
	stack<size_t> openBrackets;
	
	for(size_t idx = 0; idx < line.length(); idx++) {
		size_t beginning;
		
		switch(line[idx]) {
			case '(': openBrackets.push(idx); break;
			case ')': 
				beginning = openBrackets.top();
				openBrackets.pop();
				
				cout << line.substr(beginning, idx - beginning + 1) << endl;
			default: break;
		}
	}
	
	return 0;
}
