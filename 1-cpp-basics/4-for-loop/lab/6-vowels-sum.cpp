#include <iostream>
using namespace std;

int main() {
	string inputText;
	getline(cin, inputText);
	
	int sum = 0;
	
	for (int i = 0; i < inputText.size(); i++) {
		char currentSymbol = inputText[i];
		
		if (currentSymbol == 'a') {
			sum += 1;
		}
		else if (currentSymbol == 'e') {
			sum += 2;
		}
		else if (currentSymbol == 'i') {
			sum += 3;
		}
		else if (currentSymbol == 'o') {
			sum += 4;
		}
		else if (currentSymbol == 'u') {
			sum += 5;
		}
	}
	
	cout << sum << endl;
	
	return 0;
}
