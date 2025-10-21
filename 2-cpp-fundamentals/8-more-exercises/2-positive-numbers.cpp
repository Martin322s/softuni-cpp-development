#include <iostream>

using namespace std;

int main() {
	int N, sum = 0;
	cin >> N;
	
	for (int i = 0; i < N; i++) {
		int num;
		cin >> num;
		
		if (num > 0) sum++;
	}
	
	cout << sum;
	cout << endl;

	return 0;
}

