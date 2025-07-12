#include <iostream>
#include <string>
#include <map>
#include <set>

using namespace std;

int main() {
    int numberOfCities;
    cin >> numberOfCities;
    cin.ignore();

    map<string, double> cities;
    set<string> uniqueCities;

    string city;
    double price;
    int quantity;

    while (uniqueCities.size() < numberOfCities) {
        cin >> city >> price >> quantity;

        if (cities.find(city) != cities.end()) {
            cities[city] += price * quantity;
        } 
    	else if (uniqueCities.size() < numberOfCities) {
            uniqueCities.insert(city);
            cities[city] = price * quantity;
        }
    }

    for (const pair<string, double> city : cities) {
        cout << city.first << " " << city.second << endl;
    }

    return 0;
}
