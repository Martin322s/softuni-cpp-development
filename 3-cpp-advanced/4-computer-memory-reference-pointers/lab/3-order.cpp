#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>

using namespace std;

bool companiesCompare(const pair<int*, const char*> & a, const pair<int*, const char*> & b)
{
	return (*a.first) < (*b.first);
}

int main() {
	char buffer[1000];
	int nextDataIdx = 0;
	
	vector<pair<int*, const char *>> companies;
	
	string name;
	
	while(cin >> name) {
		if (name == "end") {
			break;
		}
		
		int id;
		cin >> id;
		
		int* ptrId = (int*)(buffer + nextDataIdx);
		*ptrId = id;
		nextDataIdx += sizeof(id);
		
		strcpy(buffer + nextDataIdx, name.c_str());
		
		companies.push_back(pair<int*, const char*>(ptrId, buffer + nextDataIdx));
		
		nextDataIdx += strlen(buffer + nextDataIdx) + 1;	
	}
	
	sort(companies.begin(), companies.end(), companiesCompare);
	
	for (const auto company : companies)
		cout << company.second << ' ' << *(company.first) << endl;
	
	return 0;
}

