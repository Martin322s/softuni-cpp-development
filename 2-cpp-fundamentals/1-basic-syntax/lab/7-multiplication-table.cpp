#include <iostream>
#include <string>
using namespace std;

int main() {
	int integer;
	cin >> integer;
	
	for (int i = 1; i <= 10; i++) {
		int product = integer * i;
		
		cout << integer << " X " << i << " = " << product << endl;
	}
	
	return 0;
}
