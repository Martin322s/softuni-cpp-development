#include <iostream>

using namespace std;

int main() {
	int num, sum = 0;
	do {
		cin >> num;
		
		if (num > 0) sum += num;
	} while (num != 0);
	
	cout << sum;
	
	cout << endl;
	
	return 0;
}

