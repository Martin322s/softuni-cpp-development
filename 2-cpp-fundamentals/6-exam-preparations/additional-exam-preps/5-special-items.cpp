#include <iostream>
#include <string>

using namespace std;

bool isMagical(char symbol) {
	switch(symbol) {
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			return true;
		default: return false;
	}
}

int main() {
	string text, result = "";
	getline(cin, text);
	
	for (int i = 0; i < text.length(); i++) {
		char currSymbol = text[i];
		char prevSymbol;
		
		if (i > 0) {
			prevSymbol = text[i - 1];
			
			bool isFound = result.find(currSymbol) != string::npos;
		
			if (!isFound || currSymbol != prevSymbol) {
				result += currSymbol;
			} else {
				if (isMagical(currSymbol) ) {
					result += currSymbol;
				}
			}
		} else {
			result += currSymbol;
		}
	}
	
	cout << result;
	
	cout << endl;
	
	return 0;
}
