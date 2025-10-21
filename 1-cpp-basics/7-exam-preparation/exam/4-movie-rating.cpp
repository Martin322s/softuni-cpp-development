#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    int movieCount;
    cin >> movieCount;
    cin.ignore(); 

    string highestRatedMovie, lowestRatedMovie, movieName;
    double highestRating = -1.0, lowestRating = 11.0, rating, totalRating = 0.0;

    for (int i = 0; i < movieCount; ++i) {
        getline(cin, movieName);
        cin >> rating;
        cin.ignore(); 

        if (rating > highestRating) {
            highestRating = rating;
            highestRatedMovie = movieName;
        }
        if (rating < lowestRating) {
            lowestRating = rating;
            lowestRatedMovie = movieName;
        }
        totalRating += rating;
    }

    double averageRating = totalRating / movieCount;

    cout << fixed << setprecision(1);
    cout << highestRatedMovie << " is with highest rating: " << highestRating << endl;
    cout << lowestRatedMovie << " is with lowest rating: " << lowestRating << endl;
    cout << "Average rating: " << averageRating << endl;

    return 0;
}
