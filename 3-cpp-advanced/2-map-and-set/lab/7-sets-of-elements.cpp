#include <iostream>
#include <set>
#incldue <string>

using namespace std;

int main() {
	set<int> firstSet;
	set<int> secondSet;
	
	int N, M;
	cin >> N >> M;
	
	for (int i = 0; i < N; i++) {
		int num;
		cin >> num;
		firstSet.insert(num);
	}
	
	for (int i = 0; i < M; i++) {
		int num;
		cin >> num;
		secondSet.insert(num);
	}
	
	if (N >= M) {
		for (int num : firstSet) {
			auto number = secondSet.find(num);
			
			if (number != secondSet.end()) {
				cout << num << " ";
			}
		}
	} else {
		for (int num : secondSet) {
			auto number = firstSet.find(num);
			
			if (number != firstSet.end()) {
				cout << num << " ";
			}
		}
	}
	
	return 0;
}

