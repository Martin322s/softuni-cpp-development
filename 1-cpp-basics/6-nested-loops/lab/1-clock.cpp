#include <iostream>
using namespace std;

int main() {
    for (int hours = 0; hours < 24; hours++) {
        for (int minutes = 0; minutes < 60; minutes++) {
            cout << hours << ":" << minutes << endl;
        }
    }
    return 0;
}
