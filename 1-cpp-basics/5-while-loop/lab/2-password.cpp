#include <iostream>
using namespace std;

int main() {
	string username, password;
	cin >> username >> password;
	
	string inputText;
	cin >> inputText;
	
	while (inputText != password) {
		cin >> inputText;
	}
	
	cout << "Welcome " << username << '!' << endl;
	
	return 0;
}
