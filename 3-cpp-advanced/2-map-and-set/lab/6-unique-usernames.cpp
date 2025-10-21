#include <iostream>
#include <set>

using namespace std;

int main() {
	set<string> usernames;
	
	int N;
	cin >> N;
	
	for (int i = 0; i < N; i++) {
		string name;
		cin >> name;
		
		usernames.insert(name);	
	}
	
	for (const string & name : usernames) {
		cout << name << endl;
	}
	
	return 0;
}

