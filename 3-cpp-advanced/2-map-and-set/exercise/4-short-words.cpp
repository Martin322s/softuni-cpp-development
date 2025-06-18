#include <iostream>
#include <set>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

int main() {
	string lineBuf;
	getline(cin, lineBuf);
	
	transform(lineBuf.begin(), lineBuf.end(), lineBuf.begin(), ::tolower);
	
	istringstream istr(lineBuf);

    set<string> words;
    string curWord; 
    
    while(istr >> curWord) {
    	if (curWord.length() < 5)
    		words.insert(curWord);
	}
	
	bool bFirst = true;
	
	for(const string & word : words) {
		if (!bFirst) cout << ", ";
		cout << word;
		bFirst = false;
	}
	
	cout << endl;
	
	return 0;
}

