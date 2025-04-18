#include <iostream>
#include <string>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	
	bool isPositive = true;
	int i = 0;
	
	if (a != 0 && b != 0 && c != 0) {
		if (a < 0)
			i++;
		if (b < 0)
			i++;
		if (c < 0)
			i++;		
	}
	
	isPositive = (i % 2 == 0);
	
	if (isPositive) {
		cout << '+';
	} else {
		cout << '-';
	}
	
	cout << endl;
	
	return 0;
}
