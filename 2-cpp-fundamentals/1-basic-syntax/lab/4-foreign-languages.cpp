#include <iostream>
#include <string>

using namespace std;

int main() {
	string countryName;
	cin >> countryName;
	
	if (countryName == "England" || countryName == "USA") {
		cout << "English";
	} else if (countryName == "Spain" || 
		countryName == "Argentina" || 
		countryName == "Mexico"
	) {
		cout << "Spanish";
	} else {
		cout << "unknown";
	}

	cout << endl;
	
	return 0;
}
