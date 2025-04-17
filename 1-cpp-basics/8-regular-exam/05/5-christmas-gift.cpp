#include <iostream>
#include <string>

using namespace std;

int main() {
    int adults = 0;
    int kids = 0;
    int toysMoney = 0;
    int jumpersMoney = 0;

    string input;
    
    while (getline(cin, input)) {
        if (input == "Christmas") {
            break;
        }

        int age = 0;
        int i = 0;
        while (i < input.length()) {
            if (isdigit(input[i])) {
                age = age * 10 + (input[i] - '0');
                i++;
            } else {
                break;
            }
        }

        if (age <= 16) {
            kids++;
            toysMoney += 5;
        } else {
            adults++;
            jumpersMoney += 15;
        }
    }

    cout << "Number of adults: " << adults << endl;
    cout << "Number of kids: " << kids << endl;
    cout << "Money for toys: " << toysMoney << endl;
    cout << "Money for sweaters: " << jumpersMoney << endl;

    return 0;
}
