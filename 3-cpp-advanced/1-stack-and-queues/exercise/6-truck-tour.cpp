#include <iostream>
#include <sstream>
#include <queue>

using namespace std;

bool canCompleteCircle(queue<int> distance, queue<int> fuel) {
	int truckFuel = 0;
	
	while(distance.size()) {
		truckFuel += fuel.front();
		fuel.pop();
		
		int distanceToNext = distance.front();
		
		if (truckFuel >= distanceToNext) {
			truckFuel -= distanceToNext;
			distance.pop();
		} else {
			return false;
		}
	}
	
	return true;
}

int main(void) {
	int N;
	cin >> N;
	
	queue<int> distances;
	queue<int> fuel;
	
	for (int cnt = 0; cnt < N; cnt++) {
		int currFuel, currDistance;
		cin >> currFuel >> currDistance;
		
		distances.push(currDistance);
		fuel.push(currFuel);
	}
	
	int cnt = 0;
	
	for (; cnt < N; cnt++) {
		if (canCompleteCircle(distances, fuel)) {
			break;
		}
		
		int currFuel = fuel.front();
		fuel.pop();
		fuel.push(currFuel);
		
		distances.push(distances.front());
		distances.pop();
	}
	
	cout << cnt << endl;
	
	return 0;
}

