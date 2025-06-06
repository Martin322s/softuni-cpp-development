#include <iostream>
#include <string>
#include <sstream>
#include <list>
#include <iterator>

using namespace std;

void printTrain(const list<string>& train) {
    for (const auto& wagon : train) {
        cout << "|" << wagon;
    }
    cout << "|" << endl;
}

int main() {
    list<string> train;
    string line;

    while (getline(cin, line) && line != "end") {
        if (line == "empty") {
            train.push_back(" ");
        } else {
            train.push_back(line);
        }
    }

    while (getline(cin, line)) {
        if (line == "E") break;

        if (line == "P") {
            printTrain(train);
        } else if (line[0] == 'M') {
            stringstream ss(line);
            char cmd;
            int from, to;
            ss >> cmd >> from >> to;

            auto itFrom = train.begin();
            advance(itFrom, from - 1);
            string wagon = *itFrom;
            train.erase(itFrom);

            auto itTo = train.begin();
            advance(itTo, to - 1);
            train.insert(itTo, wagon);
            
            printTrain(train);
        } else if (line[0] == 'L') {
            stringstream ss(line);
            char cmd;
            int pos;
            ss >> cmd >> pos;

            auto it = train.begin();
            advance(it, pos - 1);
            train.erase(it);
            
            printTrain(train);
        }
    }

    return 0;
}
