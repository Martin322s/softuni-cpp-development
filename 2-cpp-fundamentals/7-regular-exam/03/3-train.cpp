#include <iostream>
#include <string>
#include <sstream>
#include <list>

using namespace std;

void printTrain(const list<string>& train) {
    for (
		list<string>::const_iterator wagonIterator = train.begin(); 
		wagonIterator != train.end(); 
		wagonIterator++
	) {
        cout << "|" << *wagonIterator;
    }
    
    cout << "|";
    
    cout << endl;
}

int main() {
    list<string> train;
    string command;

    while (getline(cin, command) && command != "end") {
        if (command == "empty") {
            train.push_back(" ");
        } else {
            train.push_back(command);
        }
    }

    while (getline(cin, command)) {
        if (command == "E") {
            break;
        }

        if (command == "P") {
            printTrain(train);
        } 
        else if (command[0] == 'M') {
            stringstream parser(command);
            char moveCommand;
            int fromPosition, toPosition;
            parser >> moveCommand >> fromPosition >> toPosition;

            list<string>::iterator fromIterator = train.begin();
            advance(fromIterator, fromPosition - 1);
            string wagonToMove = *fromIterator;
            train.erase(fromIterator);

            list<string>::iterator toIterator = train.begin();
            advance(toIterator, toPosition - 1);
            train.insert(toIterator, wagonToMove);

            printTrain(train);
        } 
        else if (command[0] == 'L') {
            stringstream parser(command);
            char leaveCommand;
            int positionToRemove;
            parser >> leaveCommand >> positionToRemove;

            list<string>::iterator removeIterator = train.begin();
            advance(removeIterator, positionToRemove - 1);
            train.erase(removeIterator);

            printTrain(train);
        }
    }

    return 0;
}
