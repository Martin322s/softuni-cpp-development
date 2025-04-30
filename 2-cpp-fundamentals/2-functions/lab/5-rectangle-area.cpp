#include <iostream>
using namespace std;

int rectangleArea(int weight, int height) {
	return weight * height;
}

int main() {
	int weight, height;
	cin >> weight >> height;
	
	int area = rectangleArea(weight, height);
	
	cout << area << endl;
	
	return 0;
}
