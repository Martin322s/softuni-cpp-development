#include <iostream>
#include <sstream>
#include <map>
#include <set>

using namespace std;

int main() {
	map<string, map<string, set<string>>> data;
	
	int count;
	cin >> count;
	
	while(count--) {
		string continent, country, city;
		cin >> continent >> country >> city;
		
		data[continent][country].insert(city);
	}
	
	for (auto itContinents = data.begin(); itContinents != data.end(); itContinents++) {
		cout << itContinents->first << ':' << endl;
		
		map<string, set<string>> & countries = itContinents->second;
		
		for (auto itCountries = countries.begin(); itCountries != countries.end(); itCountries++) {
			cout << "  " << itCountries->first << " -> ";
			
			set<string> & cities = itCountries->second;
			
			bool bFirst = true;
			for (const string & city : cities) {
				if (bFirst) {
					bFirst = false;
				} else {
					cout << ", ";
				}
				
				cout << city ;
			}
			
			cout << endl;
		}
	}
	
	return 0;
}

