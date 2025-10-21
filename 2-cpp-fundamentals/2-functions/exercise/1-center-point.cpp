#include <iostream>
#include <string>
#include <cmath>
using namespace std;

float findDistance(float a, float b) {
	return sqrt(pow(a, 2) + pow(b, 2));
}

void printDistance(float a, float b) {
	cout << "(" << a << ", " << b << ")" << endl;
}

int main() {
	float x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	
	float point1 = findDistance(x1, y1);
	float point2 = findDistance(x2, y2);
	
	if (point1 <= point2) {
		printDistance(x1, y1);
	} else {
		printDistance(x2, y2);
	}
	
	return 0;
}
