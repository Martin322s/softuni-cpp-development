#include <iostream>
using namespace std;

int main() {
    int tabs;
    int salary;
    cin >> tabs >> salary;
    
    for (int i = 0; i < tabs; ++i) {
        string website;
        cin >> website;
        
        if (website == "Facebook") {
            salary -= 150;
        } else if (website == "Instagram") {
            salary -= 100;
        } else if (website == "Reddit") {
            salary -= 50;
        }
        
        if (salary <= 0) {
            cout << "You have lost your salary." << endl;
            return 0;
        }
    }
    
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << salary << endl;
    
    return 0;
}
