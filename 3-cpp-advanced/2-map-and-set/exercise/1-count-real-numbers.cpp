#include <iostream>
#include <map>
#include <string>
#include <sstream>
#include <utility>

using namespace std;

int main() {
	map<double, int> numbers;

	string input;
	getline(cin, input);
	
	double num;
	istringstream istr(input);
	
	while(istr >> num)
		numbers[num]++;
	
	for(const pair<double, int> & num : numbers)
		cout << num.first << " -> " << num.second << endl;
	
	cout << endl;
	
	return 0;
}
