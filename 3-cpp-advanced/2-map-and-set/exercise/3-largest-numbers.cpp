#include <iostream>
#include <set>
#include <string>
#include <sstream>

using namespace std;

int main() {
	string input;
	getline(cin, input);
	
	set<double, greater<double>> numbers;
	
	istringstream istr(input);
	double num;
	
	while(istr >> num)
		numbers.insert(num);
		
	int count = 0;
	
	if (numbers.size() >= 3) {
		for(auto it = numbers.begin(); it != numbers.end() && count < 3; it++, count++)
			cout << *it << " ";
	} else {
		for(auto & num: numbers) {
			cout << num << " ";
		}
	}
	
	return 0;
}

