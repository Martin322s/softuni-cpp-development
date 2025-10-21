#include <iostream>
using namespace std;

int main() {
	const double MINIMUM_EXCELLENT_GRADE = 5.50;
	double grade;
	cin >> grade;
	
	if (grade >= MINIMUM_EXCELLENT_GRADE) {
		cout << "Excellent!" << endl;
	}
	
	return 0;
}
