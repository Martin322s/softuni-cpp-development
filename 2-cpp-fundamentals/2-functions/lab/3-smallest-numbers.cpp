#include <iostream>
using namespace std;

int printSmallestNumber(int a, int b, int c) {
	if (a <= b && a <= c) {
		return a;
	} else if (b <= a && b <= c) {
		return b;
	} else if (c < a && c < b) {
		return c;
	}
}

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	
	cout << printSmallestNumber(a, b, c) << endl;
	
	return 0;
}
