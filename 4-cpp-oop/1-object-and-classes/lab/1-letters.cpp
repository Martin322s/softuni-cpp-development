#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>
#include <set>

using namespace std;

class Letters {
	set<string> words;
	
	public:
		Letters(string line) {
			normalize(line);
			istringstream istr(line);
			string tmp;
			
			while(istr >> tmp) words.insert(tmp);
		}
		
		string process(char c) {
			
			ostringstream ostr;
			
			c = ::tolower(c);
		
			for(const string& curr : words) {
				string transformed = curr;
			
				transform(transformed.begin(), transformed.end(), transformed.begin(), ::tolower);
			
				if (transformed.find(c) != string::npos) {
					ostr << curr << ' ';
				}
			}

			string result = ostr.str();
			
			if (result.size() == 0) {
				ostr << "---" << endl;
			}
			
			return result;
		}
	
	private:
		void normalize(string& buf) {
			for(char& c : buf) {
				if (ispunct(c)) {
					c = ' ';
				}
			}
		}
};

int main() {
	string buf;
	getline(cin, buf);
	
	Letters L(buf);
	
	while(true) {
		char c;
		cin >> c;
		
		if (c == '.' || c == 0) 
			break;
			
		cout << L.process(c) << endl;
	}
	
	cout << endl;

	return 0;
}
