#include <iostream>
#include <string>
#include <sstream>
#include <set>

using namespace std;

int main() {
	string lineBuf;
	getline(cin, lineBuf);
	
	istringstream istr(lineBuf);
	
	set<double, less<double>> numbers;
	double curNum;
	
	while(istr >> curNum)
		numbers.insert(curNum);
		
	bool beFirst = true;
	
	for(double num : numbers) {
		if(!beFirst) cout << " <= ";
		cout << num;
		beFirst = false;
	}
	return 0;
}

