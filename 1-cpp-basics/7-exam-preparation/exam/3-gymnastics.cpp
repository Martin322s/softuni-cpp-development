#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    string country, instrument;

    cin >> country >> instrument;

    double difficulty, execution;

    if (country == "Russia") {
        if (instrument == "ribbon") {
            difficulty = 9.100;
            execution = 9.400;
        } else if (instrument == "hoop") {
            difficulty = 9.300;
            execution = 9.800;
        } else if (instrument == "rope") {
            difficulty = 9.600;
            execution = 9.000;
        }
    } else if (country == "Bulgaria") {
        if (instrument == "ribbon") {
            difficulty = 9.600;
            execution = 9.400;
        } else if (instrument == "hoop") {
            difficulty = 9.550;
            execution = 9.750;
        } else if (instrument == "rope") {
            difficulty = 9.500;
            execution = 9.400;
        }
    } else if (country == "Italy") {
        if (instrument == "ribbon") {
            difficulty = 9.200;
            execution = 9.500;
        } else if (instrument == "hoop") {
            difficulty = 9.450;
            execution = 9.350;
        } else if (instrument == "rope") {
            difficulty = 9.700;
            execution = 9.150;
        }
    }

    double totalScore = difficulty + execution;
    double percentageMissing = (20.0 - totalScore) / 20.0 * 100.0;

    cout << fixed << setprecision(3) << "The team of " << country << " get " << totalScore << " on " << instrument << "." << endl;
    cout << fixed << setprecision(2) << percentageMissing << "%" << endl;

    return 0;
}
