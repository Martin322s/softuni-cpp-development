#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    int maxPoorGrades;
    cin >> maxPoorGrades;
    cin.ignore();

    string problemName;
    int grade, poorGrades = 0, problemsCount = 0;
    double totalScore = 0.0;
    string lastProblem;

    while (true) {
        getline(cin, problemName);
        if (problemName == "Enough") {
            cout << fixed << setprecision(2);
            cout << "Average score: " << (totalScore / problemsCount) << endl;
            cout << "Number of problems: " << problemsCount << endl;
            cout << "Last problem: " << lastProblem << endl;
            return 0;
        }

        cin >> grade;
        cin.ignore();
        totalScore += grade;
        problemsCount++;
        lastProblem = problemName;

        if (grade <= 4) {
            poorGrades++;
            if (poorGrades >= maxPoorGrades) {
                cout << "You need a break, " << poorGrades << " poor grades." << endl;
                return 0;
            }
        }
    }
}
