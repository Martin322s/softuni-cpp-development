#include <iostream>
using namespace std;

int main() {
	int integersCount;
	cin >> integersCount;
	
	int leftSum = 0;
	int rightSum = 0;
	
	for (int i = 0; i < integersCount; i++) {
		int num;
		cin >> num;
		leftSum += num;
	}
	
	for (int i = 0; i < integersCount; i++) {
		int num;
		cin >> num;
		rightSum += num;
	}
	
	if (leftSum == rightSum) {
		cout << "Yes, sum = " << leftSum << endl;
	} else {
		if (leftSum > rightSum) {
			cout << "No, diff = " << (leftSum - rightSum) << endl;
		} else {
			cout << "No, diff = " << (rightSum - leftSum) << endl;
		}
	}
	
	return 0;
}
