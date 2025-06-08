#include <iostream>

using namespace std;

int main() {
	int number, a{5};
	cin >> number;
	
	cout << (number % 2 == 0 ? "even" : "odd");
	cout << endl;
	
	return 0;
}
