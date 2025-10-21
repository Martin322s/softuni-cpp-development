#include <iostream>
using namespace std;

int main() {
	string animalType;
	cin >> animalType;
	
	if (animalType == "dog") {
		cout << "mammal" << endl;	
	} 
	else if (animalType == "crocodile") {
		cout << "reptile" << endl;
	}
	else if (animalType == "tortoise") {
		cout << "reptile" << endl;
	}
	else if (animalType == "snake") {
		cout << "reptile" << endl;
	}
	else {
		cout << "unknown" << endl;
	}
	
	return 0;
}
