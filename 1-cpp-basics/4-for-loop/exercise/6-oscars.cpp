#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;

int main() {
    string actor;
    double points;
    int n;
    
    getline(cin, actor);
    cin >> points >> n;
    
    for (int i = 0; i < n; ++i) {
        string judgeName;
        double judgePoints;
        
        cin.ignore();
        getline(cin, judgeName);
        cin >> judgePoints;
        
        points += (judgeName.length() * judgePoints) / 2;
        
        if (points > 1250.5) {
            cout << "Congratulations, " << actor << " got a nominee for leading role with ";
            cout.setf(ios::fixed);
            cout.precision(1);
            cout << points << "!" << endl;
            return 0;
        }
    }
    
    cout << "Sorry, " << actor << " you need ";
    
    cout.setf(ios::fixed);
    cout.precision(1);
    cout << 1250.5 - points << " more!" << endl;
    
    return 0;
}
