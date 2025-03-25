#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    string movieName;
    int days, tickets;
    double ticketPrice;
    int cinemaPercentage;

    getline(cin, movieName);
    cin >> days >> tickets >> ticketPrice >> cinemaPercentage;

    double totalRevenue = days * tickets * ticketPrice;
    double cinemaCut = totalRevenue * (cinemaPercentage / 100.0);
    double studioProfit = totalRevenue - cinemaCut;

    cout << fixed << setprecision(2) << "The profit from the movie " << movieName << " is " << studioProfit << " lv." << endl;

    return 0;
}
