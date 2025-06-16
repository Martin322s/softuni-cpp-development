#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
    queue<string> q;
    string command;

    while (true) {
        getline(cin, command);

        if (command == "End") {
            cout << q.size() << " people remaining." << endl;
            break;
        }
        else if (command == "Paid") {
            while (!q.empty()) {
                cout << q.front() << endl;
                q.pop();
            }
        }
        else {
            q.push(command);
        }
    }
    return 0;
}
