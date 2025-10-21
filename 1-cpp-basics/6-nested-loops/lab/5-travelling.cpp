#include <iostream>
#include <string>
using namespace std;

int main() {
    string destination;
    while (true) {
        cin >> destination;
        if (destination == "End") break;

        double budget, saved = 0, amount;
        cin >> budget;
        
        while (saved < budget) {
            cin >> amount;
            saved += amount;
        }

        cout << "Going to " << destination << "!" << endl;
    }

    return 0;
}
