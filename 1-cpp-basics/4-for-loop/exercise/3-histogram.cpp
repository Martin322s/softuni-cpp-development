#include <iostream>
using namespace std;

int main() {
	double counterLessThan200 = 0;
	double counterBetween200and399 = 0;
	double counterBetween400and599 = 0;
	double counterBetween600and799 = 0;
	double counterGreaterThan800 = 0;
	
	int inputNumber;
	cin >> inputNumber;
	
	for (int i = 0; i < inputNumber; i++) {
		int num;
		cin >> num;
		
		if (num < 200) {
			counterLessThan200++;
		} else if(num >= 200 && num <= 399) {
			counterBetween200and399++;
		} else if(num >= 400 && num <= 599) {
			counterBetween400and599++;
		} else if (num >= 600 && num <= 799) {
			counterBetween600and799++;
		} else if (num >= 800) {
			counterGreaterThan800++;
		}
	}
	
	double percentLessThan200 = counterLessThan200 / inputNumber * 100;
	double percentBetween200and399 = counterBetween200and399 / inputNumber * 100;
	double percentBetween400and599 = counterBetween400and599 / inputNumber * 100;
	double percentBetween600and799 = counterBetween600and799 / inputNumber * 100;
	double percentLessGreaterThan800 = counterGreaterThan800 / inputNumber * 100;
	
	cout.setf(ios::fixed);
	cout.precision(2);
	
	cout << percentLessThan200 << "%" << endl;
	cout << percentBetween200and399 << "%" << endl;
	cout << percentBetween400and599 << "%" << endl;
	cout << percentBetween600and799 << "%" << endl;
	cout << percentLessGreaterThan800 << "%" << endl;
	
	return 0;
}
