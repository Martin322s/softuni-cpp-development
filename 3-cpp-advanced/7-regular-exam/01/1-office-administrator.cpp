#include <iostream>
#include <map>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

int main() {
    map<string, vector<int>> rooms;
    string line;

    while (getline(cin, line) && line != "END") {
        istringstream iss(line);
        string name;
        int room;
        
        iss >> name >> room;
        
        rooms[name].push_back(room);
    }

    while (getline(cin, line) && line != "END") {
        if (rooms.count(line)) {
            vector<int>& roomNumbers = rooms[line];
            
            sort(roomNumbers.begin(), roomNumbers.end());
            
            cout << line << ": ";
            
            for (int i = 0; i < roomNumbers.size(); ++i) {
                cout << roomNumbers[i];
                
                if (i != roomNumbers.size() - 1) {
					cout << " ";
				}	
            }
            
            cout << endl;
            
        } else {
            cout << line << ": Not found!" << endl;
        }
    }
    
    cout << endl;

    return 0;
}
