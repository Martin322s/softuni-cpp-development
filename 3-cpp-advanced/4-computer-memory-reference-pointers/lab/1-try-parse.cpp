#include <iostream>

using namespace std;

bool parse(const char* buffer, int * result);

int main() 
{
	string a, b;
	cin >> a >> b;
	
	int iA, iB;
	bool bA, bB;
	
	bA = parse(a.c_str(), &iA);
	bB = parse(b.c_str(), &iB);
	
	if (bA && bB) {
		cout << (iA + iB) << endl;
	} else {
		if (bA) {
			cout << iA << endl;
		} else {
			cout << "[error] " << a << endl;
		}
		
		if (bB) {
			cout << iB << endl;
		} else {
			cout << "[error] " << b << endl;
		}
	}
	
	cout << endl;
	
	return 0;
}

bool parse(const char* buffer, int* result)
{
	if (*buffer == 0) return false;

	int iRes = 0;

	while (*buffer) {
		if (*buffer >= '0' && *buffer <= '9') {
			iRes *= 10;
			iRes += *buffer - '0';
		} else {
			return false;
		}

		buffer++;
	}

	*result = iRes;
	return true;
}
