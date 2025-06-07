#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N;
	cin >> N;
	
	vector<int> numbers(N);
	
	for (int i = 0; i < N; i++) {
		int num;
		cin >> num;
		
		numbers[i] = num;
	}
	
	while(numbers.size() > 1) {
		vector<int> condensed;
		
		for (int i = 0; i < numbers.size() - 1; i++) {
			int sum = numbers[i] + numbers[i + 1];
			condensed.push_back(sum);
		}
		
		numbers = condensed;
	}
	
	cout << numbers[0];
	
	cout << endl;
	
	return 0;
}

