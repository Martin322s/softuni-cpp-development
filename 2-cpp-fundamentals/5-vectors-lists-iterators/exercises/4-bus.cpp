#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int convertMilitaryTime(const string& busTimeStr) {
	int hour = (busTimeStr[0] - '0') * 10 + (busTimeStr[1] - '0');
	int minute = (busTimeStr[2] - '0') * 10 + (busTimeStr[3] - '0');
	
	return hour * 60 + minute;
}

int main() {
	int N; 
	cin >> N;
	
	vector<int> busArrivalTimes;
	busArrivalTimes.reserve(N);
	
	while(N--) {
		string busTimeStr;
		cin >> busTimeStr;
		
		int minutesSinceMidnight = convertMilitaryTime(busTimeStr);
		busArrivalTimes.push_back(minutesSinceMidnight);
	}
	
	string trainDepartureTimeStr;
	cin >> trainDepartureTimeStr;
	
	int trainDepartureTime = convertMilitaryTime(trainDepartureTimeStr);
	int bestBusDifference = INT_MAX;
	int bestBusDifferenceIndex = -1;
	
	for (int busPos = 0; busPos < busArrivalTimes.size(); busPos++) {
		int busArrival = busArrivalTimes[busPos];
		int difference;
		
		if (trainDepartureTime >= busArrival) {
			difference = trainDepartureTime - busArrival;
		} else {
			difference = ((24 * 60) - busArrival) + trainDepartureTime;
		}
		
		if (difference < bestBusDifference) {
			bestBusDifference = difference;
			bestBusDifferenceIndex = busPos + 1;
		}
	}
	
	cout << bestBusDifferenceIndex;
	
	cout << endl;

    return 0;
}
