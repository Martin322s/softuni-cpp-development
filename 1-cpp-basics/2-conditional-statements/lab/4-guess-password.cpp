#include <iostream>
using namespace std;

int main() {
	const string PASSWORD = "s3cr3t!P@ssw0rd";
	
	string inputPassword;
	cin >> inputPassword;
	
	if (inputPassword == PASSWORD) {
		cout << "Welcome" << endl;
	}
	else {
		cout << "Wrong password!" << endl;
	}
	
	return 0;
}
