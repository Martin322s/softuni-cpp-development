#include <iostream>
#include <sstream>
#include <stack>

using namespace std;

int main() {
	stack<int> box;
	
	string line;
	getline(cin, line);
	istringstream boxStream(line);
	
	int tmp;
	
	while(boxStream >> tmp)
		box.push(tmp);
	
	int rackCap;
	cin >> rackCap;
	
	int racks = 1;
	int remainingRackCapacity = rackCap;
	
	while(box.size()) {
		int currPack = box.top();
		box.pop();
		
		if (currPack <= remainingRackCapacity) {
			remainingRackCapacity -= currPack;
		} else {
			racks++;
			remainingRackCapacity = rackCap;
			remainingRackCapacity -= currPack;
		}
	}
	
	cout << racks << endl;
	
	return 0;
}

