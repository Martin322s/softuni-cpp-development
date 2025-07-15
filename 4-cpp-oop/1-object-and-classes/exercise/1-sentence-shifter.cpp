#include <iostream>
#include <vector>
#include <sstream>
#include <string>

using namespace std;

class SentenceShifter {
	vector<string> data;
	
	public:
		void read(istream& is);
		void shift(int number);
		void print(ostream& os);
		void shift() {
			data.insert(data.begin(), data.back());
			data.pop_back();
		}
};

void SentenceShifter::read(istream& is) {
	data.clear();
	string word;
	
	while(is >> word) 
		data.push_back(word);
}

void SentenceShifter::shift(int number) {
	while(number--) {
		shift();
	}
}

void SentenceShifter::print(ostream& os) {
	for(const string & word : data) {
		cout << word << endl;
	}
}

int main() {
	string line;
	getline(cin, line);
	istringstream istr(line);
	
	SentenceShifter ss;
	
	ss.read(istr);
	
	int n;
	cin >> n;
	
	ss.shift(n);
	
	ss.print(cout);
	
	return 0;
}

