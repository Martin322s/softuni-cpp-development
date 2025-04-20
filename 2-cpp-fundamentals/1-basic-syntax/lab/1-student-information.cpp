#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
	string name;
	int age;
	float grade;
	
	cin >> name >> age >> grade;
	
	cout << fixed << setprecision(2) << 
		"Name: " << name << 
		", Age: " << age << 
		", Grade: " << grade;
		
	cout << endl;
	
	return 0;
}
