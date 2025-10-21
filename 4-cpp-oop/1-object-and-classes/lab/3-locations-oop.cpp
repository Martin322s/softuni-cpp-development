#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

using NamesVector = vector<string>;
using Coords = pair<string, string>;
using CoordsVector = vector<Coords>;

class Data {
	NamesVector names;
	CoordsVector coords;
	
	public:
		void read(const string & line) {
			istringstream istr(line);
			
			string name;
			Coords coordinates;
			
			getline(istr, name, ',');
			getline(istr, coordinates.first, ',');
			istr >> coordinates.second;
			
			names.push_back(name);
			coords.push_back(coordinates);
		}
		
		string process(const string & line) {
			istringstream istr(line);
			
			if (isdigit(line[0])) {
				Coords coordinates;
				
				istr >> coordinates.first >> coordinates.second;
				
				return findByCoords(coordinates);
			} else {
				string name;
				istr >> name;
				
				return findByName(name);
			}
		}
		
		private:
			string findByCoords(const Coords & coordinates) {
				ostringstream ostr;
				
				CoordsVector::iterator itFound = find(coords.begin(), coords.end(), coordinates);
				
				while(itFound != coords.end()) {
					int idx = itFound - coords.begin();
					
					ostr << names[idx] << ',' << coords[idx].first << ',' << coords[idx].second << endl;

                	itFound = find(itFound+1, coords.end(), coordinates);
				}
				
				return ostr.str();
			}
			
			string findByName(const string & name) {

            ostringstream ostr;

            NamesVector::iterator itFound = find(names.begin(), names.end(), name);
            
			if (itFound != names.end()) {
                int idx = itFound - names.begin();

                ostr << names[idx] << ',' << coords[idx].first << ',' << coords[idx].second << endl;
            }

            return ostr.str();
        }
};

int main() {
	Data d;
	
	while(true) {
		string buffer;
		getline(cin, buffer);
		
		if (buffer == ".") {
			break;
		}
		
		d.read(buffer);
	}
	
	while(true) {
		string line;
		getline(cin, line);
		
		if (line == ".") {
			break;
		}
		
		cout << d.process(line);
	}

	return 0;
}
