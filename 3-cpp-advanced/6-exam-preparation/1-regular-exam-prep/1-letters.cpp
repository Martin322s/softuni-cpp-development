#include <iostream>
#include <string>
#include <sstream>
#include <set>
#include <algorithm>

using namespace std;

int main() {
	string line;
	getline(cin, line);
	
	for (char& c : line) {
		if (!isalpha(c)) {
			c = ' ';
		}
	}
	
	set<string> words;
	istringstream istr(line);
	string buffer;
	
	while(istr >> buffer)
		words.insert(buffer);
	
	while(true) {
		getline(cin, buffer);
		
		if (buffer[0] == '.' || buffer[0] == 0) 
			break;
			
		bool not_found = true;
		
		char searchChar = ::tolower(buffer[0]);
		
		for(const string& curr : words) {
			string transformed = curr;
			
			transform(transformed.begin(), transformed.end(), transformed.begin(), ::tolower);
			
			if (transformed.find(searchChar) != string::npos) {
				not_found = false;
				cout << curr << ' ';
			}
		}
		
		if (not_found) {
			cout << "---" << endl;
		} else {
			cout << endl;
		}
	}
	
	cout << endl;
	
	return 0;
}
