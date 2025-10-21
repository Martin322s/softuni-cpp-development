#include <iostream>
#include <string>

using namespace std;

int main() {
    int width, length, height;
    cin >> width >> length >> height;
    int space = width * length * height;

    string input;
    while (cin >> input && input != "Done") {
        int boxes = stoi(input);
        space -= boxes;

        if (space < 0) {
            cout << "No more free space! You need " << -space << " Cubic meters more." << endl;
            return 0;
        }
    }

    cout << space << " Cubic meters left." << endl;
    return 0;
}
