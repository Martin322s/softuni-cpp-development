#include <string>
#include <iostream>
#include <sstream>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

vector< string > names;
vector< pair<string, string> > coords;

void printByCoords(const pair<string, string> & coordinates) {

    vector<pair<string, string>>::iterator itFound = find(coords.begin(), coords.end(), coordinates);

    while(itFound != coords.end()) {

        int idx = itFound - coords.begin();

        cout << names[idx] << ',' << coords[idx].first << ',' << coords[idx].second << endl;

        itFound = find(itFound+1, coords.end(), coordinates);
    }

}

void printByName(const string & name) {

    vector<string>::iterator itFound = find(names.begin(), names.end(), name);
    if (itFound != names.end()) {
        // found!
        int idx = itFound - names.begin(); // this is the [] index in the vector!

        cout << names[idx] << ',' << coords[idx].first << ',' << coords[idx].second << endl;
    }

}

int main(void) {

    // "Sofia,42.70,23.33"

    while(true) {

        string buffer;
        getline(cin, buffer);
        if (buffer == ".")
            break;

        istringstream istr(buffer);

        string name;
        pair<string, string> coordinates;

        getline(istr, name, ',');
        getline(istr, coordinates.first, ',');
        istr >> coordinates.second;

        names.push_back(name);
        coords.push_back(coordinates);
    }

    while(true) {

        string line;
        getline(cin, line);
        if (line == ".")
            break;

        istringstream istr(line);

        if (isdigit(line[0])) {
            // pair of coordinates
            
            pair<string, string> coordinates;
            istr >> coordinates.first >> coordinates.second;

            printByCoords(coordinates);

        } else {
            string name;
            istr >> name;

            printByName(name);
        }

    }

    return 0;
}
