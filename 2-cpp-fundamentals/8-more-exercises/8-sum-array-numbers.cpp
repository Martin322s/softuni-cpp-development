#include <iostream>

using namespace std;

int sumArrayNumbers(int array[], int size) {
	int sum = 0;
	
	for (int i = 0; i < size; i++) 
		sum += array[i];
	
	return sum;
}

int main() {
	int N;
	cin >> N;
	
	int arr[N] = {};
	
	for (int i = 0; i < N; i++) {
		int num;
		cin >> num;
		
		arr[i] = num;
	}
	
	int result = sumArrayNumbers(arr, N);
		
	cout << result;
	cout << endl;
		
	return 0;
}

