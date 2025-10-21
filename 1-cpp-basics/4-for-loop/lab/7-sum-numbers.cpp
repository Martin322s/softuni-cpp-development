#include <iostream>
using namespace std;

int main() {
	int integersCount, sum;
	cin >> integersCount;
	
	for (int i = 0; i < integersCount; i++) {
		int num;
		cin >> num;
		
		sum += num;
	}
	
	cout << sum;
	
	return 0;
}
