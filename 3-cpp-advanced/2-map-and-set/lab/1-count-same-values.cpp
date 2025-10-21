#include <iostream>
#include <sstream>
#include <vector>
#include <map>

using namespace std;

int main() {
	vector<double> values;
	map<double, unsigned> counts;
	
	string line;
	getline(cin, line);
	istringstream istr(line);
	
	double val;
	
	while(istr >> val) {
		auto i = counts.insert(pair<double, unsigned> (val, 1));
		
		if (i.second == true) {
			values.push_back(val);
		} else {
			i.first->second++;
		}
	}
	
	for(double val : values) {
		cout << val << " - " << counts[val] << " times" << endl;
	}
	
	return 0;
}
