#include <iostream>
using namespace std;

int main() {
	string inputText;
	getline(cin, inputText);
	
	for (int i = 0; i < inputText.size(); i++) {
		cout << inputText[i] << endl;
	}
	
	return 0;
}
