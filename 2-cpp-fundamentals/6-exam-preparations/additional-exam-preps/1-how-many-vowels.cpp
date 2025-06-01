#include <iostream>
#include <string>

using namespace std;

bool isVowel(char symbol) {
	switch(symbol) {
		case 'a': return true;
		case 'e': return true;
		case 'i': return true;
		case 'o': return true;
		case 'u': return true;
		case 'y': return true;
		case 'A': return true;
		case 'E': return true;
		case 'I': return true;
		case 'O': return true;
		case 'U': return true;
		case 'Y': return true;
		default : return false;
	}
}

bool isNotVowel(char symbol) {
	if ((symbol >= 65 && symbol <= 90) ||(symbol >= 97 && symbol <= 122)) {
		if (!isVowel(symbol)) {
			return true;
		}
	}
	
	return false;
}

int main() {
	int N, vowelsCount = 0, nonVowelsCount = 0;
	cin >> N;
	
	char arr[N] = {};
	
	for (int i = 0; i < N; i++)
		cin >> arr[i];
		
	for (int i = 0; i < N; i++) {
		if (isVowel(arr[i]))
			vowelsCount++;
		
		if (isNotVowel(arr[i]))
			nonVowelsCount++;
	}
	
	cout << vowelsCount << " " << nonVowelsCount;
	
	cout << endl;
	
	return 0;
}
