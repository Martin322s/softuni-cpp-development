#include <iostream>
using namespace std;

int main() {
    int pagesCount, pagesPerHour, totalDaysCount;
    int hoursPerDay;

    cin >> pagesCount;
    cin >> pagesPerHour;
    cin >> totalDaysCount;

    hoursPerDay = (pagesCount / pagesPerHour) / totalDaysCount;

    cout << hoursPerDay << endl;

    return 0;
}
