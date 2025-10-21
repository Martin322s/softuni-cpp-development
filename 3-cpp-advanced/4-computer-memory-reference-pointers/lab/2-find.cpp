#include <iostream>
#include <map>
#include <cstring>

using namespace std;

int main() {
	char buffer[1000] = {0};
	char * nextName = buffer;
	 
	map<int, const char*> companies;
	
	string name;
	
	while(cin >> name) {
		if (name == "end") {
			break;
		}
		
		int id;
		cin >> id;
		
		strcpy(nextName, name.c_str());
		
		companies[id] = nextName;
		
		nextName += strlen(nextName) + 1;
	}
	
	int findId;
	cin >> findId;
	
	auto it = companies.find(findId);
	
	if (it != companies.end()) {
		cout << it->second << ' ' << it->first << endl;
	} else {
		cout << "[not found]" << endl;
	}
	
	cout << endl;
	
	return 0;
}

