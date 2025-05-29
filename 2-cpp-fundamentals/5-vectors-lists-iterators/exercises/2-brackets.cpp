#include <iostream>
#include <list>

using namespace std;

bool checkExpression(const list<char> & expression) {
	int cycleBracketCount = 0;
	int squareBracketCount = 0;
	int curlyBracketCount = 0;
	
	for (
		list<char>::const_iterator it = expression.begin();
		it != expression.end();
		it++
	) {
		switch(*it) {
			case '(': cycleBracketCount++; break;
			case ')': 
				if (cycleBracketCount > 0) 
					cycleBracketCount--;
				else
					return false;
				break;
				
			case '[': 
				if (cycleBracketCount != 0) 
					return false;
				squareBracketCount++;
				break;
			case ']':
				if (cycleBracketCount != 0)
					return false;
				if (squareBracketCount <= 0)
					return false;
				squareBracketCount--;
				break;
			
			case '{':
				if (cycleBracketCount != 0 || squareBracketCount != 0) 
					return false;
				curlyBracketCount++;
				break;
			case '}':
				if (cycleBracketCount != 0 || squareBracketCount != 0) 
					return false;
				if (curlyBracketCount <= 0)
					return false;
				curlyBracketCount--;
				break;
		}
	}
	
	return cycleBracketCount == 0 && squareBracketCount == 0 && curlyBracketCount == 0;
}

int main() {
	string str;
	getline(cin, str);
	
	list<char> expression;
	for (char c : str) expression.push_back(c);
	
	cout << (checkExpression(expression) ? "valid" : "invalid"); 
	
	cout << endl;

    return 0;
}
