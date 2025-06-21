#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector<int> numbers;
	
	string line;
	getline(cin, line);
	
	istringstream istr(line);
	double currNum;
	
	while(istr >> currNum) {
		double d = sqrt(currNum);
		
		if (trunc(d) == d)
			numbers.push_back(currNum);
	}
	
	sort(numbers.begin(), numbers.end(), greater<int>());
	
	for (const int & num : numbers)
		cout << num << " ";
		
	cout << endl;
	
	return 0;
}
