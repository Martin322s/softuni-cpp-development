#include <iostream>
#include <math.h>
using namespace std;

int main() {
	double radians, degrees;
	
	cin >> radians;
	
	degrees = radians * (180 / 3.14);
	
	cout << round(degrees) << endl;
	
	return 0;
}
