#include <iostream>
#include <string>
#include <sstream>
#include <set>
#include <vector>
#include <algorithm>
#include <cctype>

using namespace std;

int main() {
    string lineBuf, word;
    getline(cin, lineBuf);

    transform(lineBuf.begin(), lineBuf.end(), lineBuf.begin(), ::tolower);

    istringstream istr(lineBuf);

    set<string> odd;
    vector<string> order;

    while (istr >> word) {
        auto result = odd.insert(word);
        auto it = result.first;
        bool inserted = result.second;

        if (!inserted)
            odd.erase(it);
        else
            order.push_back(word);
    }

    bool first = true;
    
    for (const string& w : order) {
       	auto it = odd.find(w);
    	if (it != odd.end()) {
        	if (!first) cout << ", ";
    	
			cout << w;
        	first = false;
        	odd.erase(it);
    	}
    }
    
    cout << '\n';
    
    return 0;
}
