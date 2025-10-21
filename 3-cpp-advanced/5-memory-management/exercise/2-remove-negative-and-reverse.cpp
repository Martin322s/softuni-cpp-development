#include <iostream>
#include <sstream>
#include <string>
#include <memory>

using namespace std;

size_t countTokens(const string& line) {
	size_t tokens = 0;
	
	istringstream istr(line);
	string test;
	
	while(istr >> test)
		tokens++;
		
	return tokens;
}

unique_ptr<int[]> readIntArray(istream& is, size_t & size) {
	
	string line;
	getline(is, line);
	
//	shared_ptr<int[]> numbers(new int[countTokens(line)]);
	unique_ptr<int[]> numbers = make_unique<int[]>(countTokens(line));
	
	istringstream istr(line);
	
	int count = 0;
	
	while(istr >> numbers[count]) {
		count++;
	}
	
	size = count;
	return numbers;
}

int main() {
	size_t size;
	
	unique_ptr<int[]> numbers = readIntArray(cin, size);
	
	ostringstream ostr;
	
	for(int i = size - 1; i >= 0; i--) {
		if (numbers[i] >= 0) {
			ostr << numbers[i] << ' ';
		}
	}
	
	string output = ostr.str();
	
	if (output.size() == 0) {
		cout << "empty";
	} else {
		cout << output;
	}

	cout << endl;
	
	return 0;
}
