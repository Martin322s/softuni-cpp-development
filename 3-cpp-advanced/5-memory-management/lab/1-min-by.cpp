#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

bool compareForLongestString(const string& bestSoFar, const string& current) {
	if(current.length() > bestSoFar.length()) {
		return true;
	}
	
	return false;
}

bool compareForShortestString(const string& bestSoFar, const string& current) {
	if(current.length() < bestSoFar.length()) {
		return true;
	}
	
	return false;
}

bool compareForLexicography(const string& bestSoFar, const string& current) {
	if(current < bestSoFar) {
		return true;
	}
	
	return false;
}

int main() {
	string wordLine;
	getline(cin, wordLine);
	
	istringstream istr(wordLine);
	string currWord;
	
	vector<string> words;
	
	while(istr >> currWord)
		words.push_back(currWord);
	
	
	int mode;
	cin >> mode;
	
	bool (*compFunc)(const string& bestSoFar, const string& current) = nullptr;
	
	switch(mode) {
		case 1:
			compFunc = compareForLexicography;
			break;
		case 2:
			compFunc = compareForShortestString;
			break;
		case 3: 
			compFunc = compareForLongestString;
			break;
	}
	
	string bestOf = words[0];
	
	for (int i = 1; i < words.size(); i++) {
		const string& curr = words[i];
		
		if (compFunc(bestOf, words[i]))
			bestOf = words[i];
	}
	
	cout << bestOf << endl;
	
	return 0;
}

