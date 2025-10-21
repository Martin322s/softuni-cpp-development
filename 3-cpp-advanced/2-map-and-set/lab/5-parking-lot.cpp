#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
    set<string> parking;
    string line;

    while (getline(cin, line)) {
        if (line == "END") break;

        size_t commaPos = line.find(", ");
        if (commaPos == string::npos) continue;

        string direction = line.substr(0, commaPos);
        string carNumber = line.substr(commaPos + 2);

        if (direction == "IN") {
            parking.insert(carNumber);
        } else if (direction == "OUT") {
            parking.erase(carNumber);
        }
    }

    if (parking.empty()) {
        cout << "Parking Lot is Empty" << endl;
    } else {
        for (const string& car : parking) {
            cout << car << endl;
        }
    }

    return 0;
}
