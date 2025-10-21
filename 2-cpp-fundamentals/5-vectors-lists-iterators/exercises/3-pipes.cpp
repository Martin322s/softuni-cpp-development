#include <iostream>
#include <vector>

using namespace std;

void readIntVector(istream& input, int numberCount, vector<int>& data) {
	while(numberCount--) {
		int number;
		cin >> number;
		
		data.push_back(number);
	}
}

int main() {
	int N;
	cin >> N;
	
	vector<int> checkup;
	checkup.reserve(N);
	readIntVector(cin, N, checkup);
	
	vector<int> installation;
	installation.reserve(N);
	readIntVector(cin, N, installation);
	
	
	vector<int> yearsToLive;
	yearsToLive.reserve(N);
	
	for (int currPipe = 0; currPipe < checkup.size(); currPipe++) {
		int corrosionPerYear = installation[currPipe] - checkup[currPipe];
		yearsToLive.push_back(installation[currPipe] / corrosionPerYear);
	}
	
	for (int y : yearsToLive) {
		cout << y << " ";
	}
	
	cout << endl;

    return 0;
}
