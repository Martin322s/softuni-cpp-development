#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
	double a, b, c;
	cin >> a >> b >> c;
	
	int discriminant = ((b * b) - (4 * a * c));
	
	if (discriminant < 0) {
		cout << "no roots" << endl;
	} else {
		double firstRoot = (-b + sqrt(discriminant)) / (2 * a);
		double secondRoot = (-b - sqrt(discriminant)) / (2 * a);
	
		if (firstRoot == 0 && secondRoot != 0)
			cout << secondRoot << endl;
		
		if (firstRoot != 0 && secondRoot == 0)
			cout << firstRoot << endl;
		
		if (firstRoot == secondRoot) 
			cout << firstRoot << endl;
		else
			if (firstRoot != 0 && secondRoot != 0)
				cout << firstRoot << " " << secondRoot << endl;
		
	}	
		
	return 0;
}
