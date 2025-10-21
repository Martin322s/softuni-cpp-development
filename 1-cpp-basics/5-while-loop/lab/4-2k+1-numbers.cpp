#include <iostream>
using namespace std;

int main() {
	int startNumber = 1, inputNumber;
	cin >> inputNumber;
	
	while (startNumber <= inputNumber) {
		cout << startNumber << endl;
		startNumber = (startNumber * 2) + 1;
	}
	
	return 0;
}
