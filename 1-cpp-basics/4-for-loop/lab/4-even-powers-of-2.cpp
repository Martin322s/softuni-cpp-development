#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int num;
	cin >> num;
	
	for (int i = 0; i <= num; i += 2) {
		cout << pow(2, i) << endl;
	}
	
	return 0;
}
