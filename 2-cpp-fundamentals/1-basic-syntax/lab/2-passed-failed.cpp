#include <iostream>
#include <string>

using namespace std;

int main() {
	float grade;
	cin >> grade;
	
	if (grade >= 3.00) {
		cout << "Passed!";
	} else {
		cout << "Failed!";
	}
	
	cout << endl;
	
	return 0;
}
