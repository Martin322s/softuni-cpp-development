#include <iostream>
#include <string>

using namespace std;

int main() {
	int oddsNumbersCount, count = 0, sum = 0;
	cin >> oddsNumbersCount;
	
	for (int i = 1; i <= oddsNumbersCount * 2; i += 2) {
		count++;
		
		if (count <= oddsNumbersCount) {
			cout << i << endl;
			sum += i;
		}
	}
	
	cout << "Sum: " << sum << endl;
	
	return 0;
}
