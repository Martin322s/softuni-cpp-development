#include <iostream>
#include <vector>
#include <sstream>
#include <string>

using namespace std;

class SentenceShifter {
	vector<string> data;
	
	public:
		void readInput(istream & is);
		void shiftInput(int number);
		void printInput(ostream & os);
		
		void shift() {
			data.insert(data.begin(), data.back());
			data.pop_back();
		}
};

void SentenceShifter::readInput(istream & is) {
	data.clear();
	string word;
	
	while(is >> word)
		data.push_back(word);
}

void SentenceShifter::shiftInput(int number) {
	while(number--)
		shift();
}

void SentenceShifter::printInput(ostream & os) {
	for(const string & word : data) {
		os << word << endl;
	}
}

int main() {
	string line;
	getline(cin, line);
	istringstream istr(line);
	
	SentenceShifter ss;
	
	ss.readInput(istr);
	
	int num;
	cin >> num;
	
	ss.shiftInput(num);
	
	ss.printInput(cout);
	
	return 0;
}

