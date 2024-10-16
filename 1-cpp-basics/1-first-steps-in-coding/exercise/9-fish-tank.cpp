#include <iostream>
using namespace std;

int main() {
	int length, width, height;
	double percentValue;
	
	cin >> length >> width >> height;
	cin >> percentValue;
	
	int volume = length * width * height;
	double volumeInLiters = volume * 0.001;
	double percent = percentValue / 100.0; 
	
	double requiredLiters = volumeInLiters * (1 - percent);
	
	cout << requiredLiters << endl;
	
	return 0;
}
