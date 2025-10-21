#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double worldRecord, distance, timePerMeter;
    cin >> worldRecord;
    cin >> distance;
    cin >> timePerMeter;

    double swimTime = distance * timePerMeter;
    double delay = floor(distance / 15) * 12.5;
    double totalTime = swimTime + delay;
    
    cout << fixed << setprecision(2);
    
    if (totalTime < worldRecord) {
        cout << "Yes, he succeeded! The new world record is " << totalTime << " seconds." << endl;
    } else {
        cout << "No, he failed! He was " << totalTime - worldRecord << " seconds slower." << endl;
    }

    return 0;
}
