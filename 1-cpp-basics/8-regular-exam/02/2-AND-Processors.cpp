#include <iostream>
#include <cmath>
using namespace std;

int main() {
	const int PROCESSOR_MANUFACTURING_TIME = 3;
	const int EMPLOYEE_WORKING_HOURS = 8;
	
	int processorsCount, workersCount, workingDays;
	cin >> processorsCount >> workersCount >> workingDays;
	
	int neededHours = workersCount * workingDays * EMPLOYEE_WORKING_HOURS;
	double manufacturedProcessors = floor(neededHours / PROCESSOR_MANUFACTURING_TIME);
	
	cout.setf(ios::fixed);
	cout.precision(2);
	
	if (manufacturedProcessors < processorsCount) {
		double processorsLeft = processorsCount - manufacturedProcessors;
		cout << "Losses: -> " << (processorsLeft * 110.10) << " BGN" << endl;
	} else {
		double processorsLeft = manufacturedProcessors - processorsCount;
		cout << "Profit: -> " << (processorsLeft * 110.10) << " BGN" << endl;
	}
	
	return 0;
}
