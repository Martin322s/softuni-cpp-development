#include <iostream>
#include <vector>
#include <utility>
#include <string>

using namespace std;

int main() {
	int rows, cols;
	cin >> rows >> cols;
	cin.ignore();
	
	int arr[rows][cols] = {};
	
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cin >> arr[i][j];
		}
	}
	
	int searchFor;
	cin >> searchFor;
	
	vector<pair<int, int>> positions;
	
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			if (arr[i][j] == searchFor)
				positions.push_back({ i, j });
		}
	}
	
	if (positions.size() == 0)
		cout << "not found";
	else 
		for (const auto & pos : positions)
			cout << pos.first << ' ' << pos.second << endl;
		
	cout << endl;
	
	return 0;
}

