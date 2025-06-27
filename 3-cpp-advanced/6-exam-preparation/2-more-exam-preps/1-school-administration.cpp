#include <iostream>
#include <map>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

int main() {
    map<string, vector<int>> roomAssignments;
    string line;

    while (getline(cin, line) && line != "END") {
        istringstream iss(line);
        string name;
        int room;
        
        iss >> name >> room;
        
        roomAssignments[name].push_back(room);
    }

    while (getline(cin, line) && line != "END") {
        if (roomAssignments.count(line)) {
            vector<int>& rooms = roomAssignments[line];
            
            sort(rooms.begin(), rooms.end());
            
            cout << line << ": ";
            
            for (size_t i = 0; i < rooms.size(); ++i) {
                cout << rooms[i];
                
                if (i != rooms.size() - 1) cout << " ";
            }
            
            cout << endl;
            
        } else {
            cout << line << ": Not found!" << endl;
        }
    }
    
    cout << endl;

    return 0;
}
