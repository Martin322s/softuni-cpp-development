#include <iostream>
#include <string>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	
	if (a <= b)
		cout << a << " " << b;
	else
		cout << b << " " << a;
		
	cout << endl;
		
	return 0;
}
