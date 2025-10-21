#include <iostream>

using namespace std;

double calculateArea(double a, double b) {
	return a * b;
}

int main() {
	double width, height;
	cin >> width >> height;
	
	cout << (calculateArea(width, height));
	
	cout << endl;
	
	return 0;
}

