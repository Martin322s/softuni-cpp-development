#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int tournaments;
    int initialPoints;
    cin >> tournaments >> initialPoints;
    
    int totalPoints = initialPoints;
    int wins = 0;
    
    for (int i = 0; i < tournaments; ++i) {
        string result;
        cin >> result;
        
        if (result == "W") {
            totalPoints += 2000;
            wins++;
        } else if (result == "F") {
            totalPoints += 1200;
        } else if (result == "SF") {
            totalPoints += 720;
        }
    }
    
    cout.setf(ios::fixed);
    cout.precision(2);
    
    cout << "Final points: " << totalPoints << endl;
    cout << "Average points: " << (totalPoints - initialPoints) / tournaments << endl;
    cout << (wins * 100.0 / tournaments) << "%" << endl;
    
    return 0;
}
