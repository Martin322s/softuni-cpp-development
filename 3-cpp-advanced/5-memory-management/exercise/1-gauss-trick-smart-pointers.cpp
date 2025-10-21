#include <iostream>
#include <sstream>
#include <string>
#include <memory>

const int MAX_SIZE = 100;

using namespace std;

int main() {
//  int* numbers = new int[MAX_SIZE];
	unique_ptr<int[]> numbers(new int[MAX_SIZE]);
	
	string line;
	getline(cin, line);
	
	istringstream istr(line);
	
	int count = 0;
	
	while(istr >> numbers[count]) {
		count++;
		
		if (count == MAX_SIZE) {
			cout << "Too big data!" << endl;
			// delete[] numbers;
			
			return 0;
		}
	}
	
	int gaussesTickSize = (count / 2 + count % 2);
	unique_ptr<int[]> gaussesNumbers = make_unique<int[]>(gaussesTickSize);
//	unique_ptr<int[]> gaussesNumbers(new int[gaussesTickSize]);
//	int* gaussesNumbers = new int[gaussesTickSize];
	
	int gaussCount = 0;
	for(; gaussCount < count / 2; gaussCount++) {
		gaussesNumbers[gaussCount] = numbers[gaussCount] + numbers[count - 1 - gaussCount];
	}
	
	if (count % 2 != 0) {
		gaussesNumbers[gaussCount] = numbers[gaussCount];
		gaussCount++;
	}
	
	for(int i = 0; i < gaussCount; i++) {
		cout << gaussesNumbers[i] << ' ';
	}
	
//	delete[] gaussesNumbers;
//  delete[] numbers;
	
	return 0;
}

