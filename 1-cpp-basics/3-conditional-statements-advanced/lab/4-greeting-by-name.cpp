#include <iostream>
using namespace std;

int main() {
	const char MALE_GENDER = 'm';
	const char FEMALE_GENDER = 'f';
	
	double age;
	char gender;
	cin >> age >> gender;
	
	if (gender == MALE_GENDER) {
		if (age >= 16) {
			cout << "Mr." << endl;
		} else {
			cout << "Master" << endl;
		}
	} else {
		if (age >= 16) {
			cout << "Ms." << endl;
		} else {
			cout << "Miss" << endl;
		}
	}
	return 0;
}
