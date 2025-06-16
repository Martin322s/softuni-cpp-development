#include <iostream>
#include <queue>
#include <sstream>
#include <string>

using namespace std;

int main() {
    string line;
    getline(cin, line);

    queue<string> players;
    istringstream iss(line);
    string kid;
    while (iss >> kid) players.push(kid);

    int n;
    cin >> n;

    while (players.size() > 1) {
        for (int i = 1; i < n; ++i) {    
            players.push(players.front());
            players.pop();
        }
        cout << "Removed " << players.front() << endl;
        players.pop();                  
    }
    cout << "Last is " << players.front() << endl;
    return 0;
}
