#include <iostream>
#include <string>

using namespace std;

int main() {
    int width, length;
    cin >> width >> length;
    int cakeSize = width * length;

    string input;
    while (cin >> input && input != "STOP") {
        int pieces = stoi(input);
        cakeSize -= pieces;

        if (cakeSize < 0) {
            cout << "No more cake left! You need " << -cakeSize << " pieces more." << endl;
            return 0;
        }
    }

    cout << cakeSize << " pieces are left." << endl;
    return 0;
}
