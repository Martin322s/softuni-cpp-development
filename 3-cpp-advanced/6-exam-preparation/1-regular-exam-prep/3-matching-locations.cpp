#include <iostream>
#include <vector>
#include <utility>
#include <sstream>

using namespace std;

int main() {
	vector<string> names;
	vector<pair<string, string>> cords;
	
	while(true) {
		string buffer;
		getline(cin, buffer);
		
		if (buffer == ".") {
			break;
		}
		
		istringstream istr(buffer);
		string name;
		string lat, lon;
		
		getline(istr, name, ',');
		getline(istr, lat, ',');
		getline(istr, lon, ',');
		
		names.push_back(name);
		cords.push_back(pair<string, string>(lat, lon));
	}
	
	while(true) {
		string buffer;
		getline(cin, buffer);
		
		if (buffer == ".") {
			break;
		}
		
		if (isdigit(buffer[0])) {
			string lat, lon;
			istringstream istr(buffer);
			istr >> lat >> lon;
			
			pair<string, string> curr(lat, lon);
			
			
			for (int idx = 0; idx < cords.size(); idx++) {
				if (cords[idx] == curr) {
					cout << names[idx] << ',' << cords[idx].first << ',' << cords[idx].second << endl;
				}
			}
		} else {
			int idx = 0;
			for (; idx < names.size(); idx++) {
				if (names[idx] == buffer) {
					break;
				}
			}
			
			if (idx >= names.size()) {
				cout << "not_found!" << endl;
			} else {
				cout << names[idx] << ',' << cords[idx].first << ',' << cords[idx].second << endl;
			}
		}
	}

	return 0;
}

