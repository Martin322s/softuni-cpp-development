#include <iostream>
#include <queue>
#include <sstream>
#include <string>
#include <climits>

using namespace std;

int main() {
    int foodQuantity;
    cin >> foodQuantity;
    cin.ignore();

    string ordersLine;
    getline(cin, ordersLine);

    queue<int> ordersSequence;
    int maxOrder = INT_MIN;

    istringstream istr(ordersLine);
    int order;
    
    while (istr >> order) {
        ordersSequence.push(order);
        if (order > maxOrder)
            maxOrder = order;
    }

    cout << maxOrder << endl;

    while (!ordersSequence.empty() &&
           ordersSequence.front() <= foodQuantity) {

        foodQuantity -= ordersSequence.front();
        ordersSequence.pop();
    }

    if (ordersSequence.empty()) {
        cout << "Orders complete\n";
    } else {
        cout << "Orders left:";
        
        while (!ordersSequence.empty()) {
            cout << ' ' << ordersSequence.front();
            ordersSequence.pop();
        }
        
        cout << '\n';
    }
    
    return 0;
}
