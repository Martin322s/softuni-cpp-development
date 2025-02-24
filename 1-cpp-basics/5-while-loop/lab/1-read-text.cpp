#include <iostream>
using namespace std;

int main() {
	string firstWord;
	cin >> firstWord;
	
	while(firstWord != "Stop") {
		cout << firstWord << endl;
		cin >> firstWord;
	}
	
	return 0;
}
