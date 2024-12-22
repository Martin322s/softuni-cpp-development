#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    int examHour, examMinute, arrivalHour, arrivalMinute;
    
    cin >> examHour;
    cin >> examMinute;
    cin >> arrivalHour;
    cin >> arrivalMinute;

    int examTimeInMinutes = examHour * 60 + examMinute;
    int arrivalTimeInMinutes = arrivalHour * 60 + arrivalMinute;
    int timeDifference = arrivalTimeInMinutes - examTimeInMinutes;

    if (timeDifference > 0) {
        cout << "Late" << endl;
        if (timeDifference < 60) {
            cout << timeDifference << " minutes after the start" << endl;
        } else {
            int hours = timeDifference / 60;
            int minutes = timeDifference % 60;
            cout << hours << ":" << setw(2) << setfill('0') << minutes << " hours after the start" << endl;
        }
    } else if (timeDifference >= -30) {
        cout << "On time" << endl;
        if (timeDifference < 0) {
            cout << abs(timeDifference) << " minutes before the start" << endl;
        }
    } else {
        cout << "Early" << endl;
        int absDifference = abs(timeDifference);
        if (absDifference < 60) {
            cout << absDifference << " minutes before the start" << endl;
        } else {
            int hours = absDifference / 60;
            int minutes = absDifference % 60;
            cout << hours << ":" << setw(2) << setfill('0') << minutes << " hours before the start" << endl;
        }
    }

    return 0;
}
