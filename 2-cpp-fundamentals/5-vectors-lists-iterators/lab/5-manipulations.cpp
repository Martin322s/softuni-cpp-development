#include <iostream>
#include <list>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

int main() {
    string line;
    getline(cin, line);

    istringstream stream(line);
    list<int> numbers;
    int num;
    while (stream >> num) {
        numbers.push_back(num);
    }

    string commandLine;
    while (getline(cin, commandLine) && commandLine != "end") {
        istringstream cmdStream(commandLine);
        string command;
        cmdStream >> command;

        if (command == "Add") {
            int value;
            cmdStream >> value;
            numbers.push_back(value);
        } 
        else if (command == "Remove") {
            int value;
            cmdStream >> value;
            numbers.remove(value);
        } 
        else if (command == "RemoveAt") {
            int index;
            cmdStream >> index;
            auto it = numbers.begin();
            advance(it, index);
            numbers.erase(it);
        } 
        else if (command == "Insert") {
            int value, index;
            cmdStream >> value >> index;
            auto it = numbers.begin();
            advance(it, index);
            numbers.insert(it, value);
        }
    }

    for (int n : numbers) {
        cout << n << " ";
    }

    cout << endl;
    return 0;
}
