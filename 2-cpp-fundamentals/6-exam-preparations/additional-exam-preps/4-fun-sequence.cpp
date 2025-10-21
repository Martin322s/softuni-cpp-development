#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int N, sum = 0, count;
	cin >> N;
	
	if (N <= 0) {
    	cout << "No" << endl;
    	return 0;
	}
	
	count = N;
	vector<int> numbers;
	
	while(N--) {
		int num;
		cin >> num;
		
		sum += num;
		numbers.push_back(num);
	}
	
	int average = sum / count;
	vector<int> filtered;
	
	for (int i = 0; i < count; i++) {
		if (numbers[i] < average && numbers[i] % 2 == 0) {
			filtered.push_back(numbers[i]);
		}
	}
	
	sort(filtered.begin(), filtered.end());
	reverse(filtered.begin(), filtered.end());
	
	if (filtered.size() == 0) {
		cout << "No";
	} else {
		for (const int el : filtered) {
			cout << el << " ";
		}
	}
	
	cout << endl;
	
	return 0;
}
