#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	vector<string> input;
	
	int elementsCount;
	cin >> elementsCount;
	
	for (int i = 0; i < elementsCount; i++) {
		string product;
		cin >> product;
		
		input.push_back(product);
	}
	
	sort(input.begin(), input.end());
	
	for (int i = 0; i < input.size(); i++) {
		cout << i + 1 << "." << input[i] << endl;
	}
	
	return 0;
}
