#include <iostream>
#include <string>
using namespace std;

void checkGrade(double grade) {
	if (grade >= 2.00 && grade <= 2.99) {
		cout << "Fail" << endl;
	} else if (grade >= 3.00 && grade <= 3.49) {
		cout << "Poor" << endl;
	} else if (grade >= 3.50 && grade <= 4.49) {
		cout << "Good" << endl;
	} else if (grade >= 4.50 && grade <= 5.49) {
		cout << "Very good" << endl;
	} else if (grade >= 5.50 && grade <= 6.00) {
		cout << "Excellent" << endl;
	}
}

int main() {
	double grade;
	cin >> grade;
	
	checkGrade(grade);
	
	return 0;
}
