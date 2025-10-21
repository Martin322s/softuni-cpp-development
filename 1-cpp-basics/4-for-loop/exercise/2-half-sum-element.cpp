#include <iostream>
#include <climits>
#include <cmath>
using namespace std;

int main() {
	int maxElement = INT_MIN;
	int sum = 0, number;
	cin >> number;
	
	for (int i = 0; i < number; i++) {
		int num;
		cin >> num;
		
	 	sum += num;
	 	
		if (num >= maxElement) {
			maxElement = num;
		}
	}
	
	if (maxElement == (sum - maxElement)) {
		cout << "Yes" << endl;
		cout << "Sum = " << maxElement << endl;
	} else {
		cout << "No" << endl;
		cout << "Diff = " << abs((maxElement - (sum - maxElement))) << endl;
	}
	
	return 0;
}
