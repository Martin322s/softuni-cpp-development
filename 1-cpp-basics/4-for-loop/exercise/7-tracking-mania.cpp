#include <iostream>
using namespace std;

int main() {
    int groups;
    cin >> groups;
    
    int totalClimbers = 0;
    int musala = 0, montblanc = 0, kilimanjaro = 0, k2 = 0, everest = 0;
    
    for (int i = 0; i < groups; ++i) {
        int climbers;
        cin >> climbers;
        totalClimbers += climbers;
        
        if (climbers <= 5) musala += climbers;
        else if (climbers <= 12) montblanc += climbers;
        else if (climbers <= 25) kilimanjaro += climbers;
        else if (climbers <= 40) k2 += climbers;
        else everest += climbers;
    }
    
    cout.setf(ios::fixed);
    cout.precision(2);
    
    cout << (musala * 100.0 / totalClimbers) << "%" << endl;
    cout << (montblanc * 100.0 / totalClimbers) << "%" << endl;
    cout << (kilimanjaro * 100.0 / totalClimbers) << "%" << endl;
    cout << (k2 * 100.0 / totalClimbers) << "%" << endl;
    cout << (everest * 100.0 / totalClimbers) << "%" << endl;
    
    return 0;
}
