#include <iostream>
#include <string>

using namespace std;

int main() {
    const int GOAL = 10000;
    int steps = 0;
    string input;

    while (steps < GOAL) {
        cin >> input;
        if (input == "Going") {
            cin >> input;
            int homeSteps;
            cin >> homeSteps;
            steps += homeSteps;
            break;
        }
        steps += stoi(input);
    }

    if (steps >= GOAL) {
        cout << "Goal reached! Good job!" << endl;
    } else {
        cout << (GOAL - steps) << " more steps to reach goal." << endl;
    }

    return 0;
}
