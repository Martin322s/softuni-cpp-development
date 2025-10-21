#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main() {
	vector<int> numbersVector;
	int num;
	string numbers;
	getline(cin, numbers);
	
	istringstream buffer(numbers);
	
	while(buffer >> num) {
		if (num >= 0) {
			numbersVector.push_back(num);
		}
	}
	
	if (!numbersVector.empty()) {
		for (int i = numbersVector.size() - 1; i >= 0; i--) {
			cout << numbersVector[i] << " ";
		}
	} else {
		cout << "empty";
	}
	
	cout << endl;
	
	return 0;
}
