#include <iostream>
#include <cmath>
using namespace std;

int main() {
    string seriesName;
    int episodeDuration, breakDuration;

    getline(cin, seriesName);
    cin >> episodeDuration;
    cin >> breakDuration;

    double lunchTime = breakDuration / 8.0;
    double relaxTime = breakDuration / 4.0;
    double availableTime = breakDuration - (lunchTime + relaxTime);

    if (availableTime >= episodeDuration) {
        cout << "You have enough time to watch " << seriesName << " and left with " 
             << ceil(availableTime - episodeDuration) << " minutes free time." << endl;
    } else {
        cout << "You don't have enough time to watch " << seriesName << ", you need " 
             << ceil(episodeDuration - availableTime) << " more minutes." << endl;
    }

    return 0;
}
