#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <sstream>
#include <iomanip>

using namespace std;

typedef map<string, vector<pair<string, double>>> SaleProduct;

class Sales {
	SaleProduct data;
	set<pair<string, double>> resultData;
	
	public:
		void addData(string city, string productType, double price, double quantity) {
			data[city].push_back(pair<string, double> { productType, (price * quantity) });
		}
		
		void calculate() {
			for(SaleProduct::iterator it = data.begin(); it != data.end(); it++) {
				double totalPrice = 0;
				for (int i = 0; i < it->second.size(); i++) {
					pair<string, double> currProduct = it->second[i];
					totalPrice += currProduct.second; 
				}
				
				resultData.insert(pair<string, double> { it->first, totalPrice });
			}
		}
		
		void print() {
			for (auto it = resultData.begin(); it != resultData.end(); it++) {
    			cout << fixed << setprecision(2) << it->first << " -> " << it->second << endl; 
			}
		}
};

int main() {
	int n;
	cin >> n;
	cin.ignore();
		
	Sales s;
	
	while(n--) {
		string line;
		getline(cin, line);
		istringstream istr(line);
		
		string city, product;
		double price, quantity;
		
		while(istr >> city >> product >> price >> quantity) {
			s.addData(city, product, price, quantity);
		}
	}
	
	s.calculate();
	
	s.print();
	
	return 0;
}
