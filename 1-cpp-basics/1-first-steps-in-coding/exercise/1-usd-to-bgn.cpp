#include <iostream>
using namespace std;

int main() {
	const double PRICE_FOR_ONE_USD = 1.79549;
	
	double sumInUSD, sumInBGN;
	cin >> sumInUSD;
	
	sumInBGN = sumInUSD * PRICE_FOR_ONE_USD;
	
	cout.setf(ios::fixed);
	cout.precision(2);
	
	cout << sumInBGN << endl;
}
