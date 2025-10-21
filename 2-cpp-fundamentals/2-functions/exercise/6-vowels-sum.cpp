#include <iostream>
#include <string>
using namespace std;

int vowelsSum(char letter, int & sum) {
	switch(letter) {
		case 'a': sum++; break;
		case 'e': sum++; break;
		case 'o': sum++; break;
		case 'u': sum++; break;
		case 'i': sum++; break;
		case 'A': sum++; break;
		case 'E': sum++; break;
		case 'O': sum++; break;
		case 'U': sum++; break;
		case 'I': sum++; break;
	}
}

int main() {
	string text;
	cin >> text;
	
	int sum = 0;
	
	for (int i = 0; i < text.size(); i++) {
		vowelsSum(text[i], sum);
	}
	
	cout << sum;
	cout << endl;
	
	return 0;
}
