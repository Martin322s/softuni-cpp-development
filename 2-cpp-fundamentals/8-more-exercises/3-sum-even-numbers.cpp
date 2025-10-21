#include <iostream>

using namespace std;

int main() {
	int N, sum = 0;
	cin >> N;
	
	for (int i = 0; i < N; i++) {
		int input;
		cin >> input;
		
		if (input % 2 == 0) sum += input;	
	}
	
	cout << sum;
	
	cout << endl;
	
	return 0;
}

