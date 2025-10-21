#include <iostream>
#include <string>
#include <vector>
#include <utility>

using namespace std;

int main() {
	vector<pair<string,int>> resources;

    string metal;
    
    while (cin >> metal && metal != "stop") {
        int quantity;
        cin >> quantity;

        bool found = false;
        
        for (auto& p : resources) {
            if (p.first == metal) {
                p.second += quantity;
                found = true;
                break;
            }
        }
        
        if (!found)
            resources.emplace_back(metal, quantity);
    }
	
	for(const pair<string, int> & res : resources)
		cout << res.first << " -> " << res.second << endl; 
	
	return 0;
}

