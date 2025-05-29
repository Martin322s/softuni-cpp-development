#include <iostream>
#include <sstream>
#include <list>

using namespace std;

void readTrain(list<int>& train) {
	string line;
	getline(cin, line);
	
	istringstream istr(line);
	int railCar;
	
	while(istr >> railCar) {
		train.push_back(railCar);
	}
	
}

void mergeFromTrain(
	list<int>& train, 
	list<int>& result, 
	char trainName, 
	string & mergeInfo
) {
	int backCar = train.back();
	train.pop_back();
	
	result.push_front(backCar);
	mergeInfo += trainName;
}

int main() {
	list<int> trainA;
	readTrain(trainA);
	
	list<int> trainB;
	readTrain(trainB);
	
	list<int> result;
	string mergeInfo = "";
	
	while(trainA.size() || trainB.size()) {
		if (trainA.size() == 0) {
			mergeFromTrain(trainB, result, 'B', mergeInfo);
		} else {
			if (trainB.size() == 0) {
				mergeFromTrain(trainA, result, 'A', mergeInfo);
			} else {
				int endA = trainA.back();
				int endB = trainB.back();
				
				if (endA < endB) {
					mergeFromTrain(trainA, result, 'A', mergeInfo);
				} else {
					mergeFromTrain(trainB, result, 'B', mergeInfo);
				}
			}
		}
	}
	
	cout << mergeInfo << endl;
	
	for (int car : result) {
		cout << car << " ";
	}
	
	cout << endl;

    return 0;
}
