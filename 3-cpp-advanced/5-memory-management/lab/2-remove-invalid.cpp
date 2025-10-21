#include <iostream>
#include <sstream>
#include <vector>
#include <string>

using namespace std;

bool isValidId(const string& str, int& outId) {
    try {
        size_t idx;
        int id = stoi(str, &idx);
        if (idx != str.length()) return false;
        if (id < 0) return false;             
        outId = id;
        return true;
    } catch (...) {
        return false;
    }
}

int main() {
    string line;
    vector<string> validCompanies;

    while (getline(cin, line)) {
        if (line == "end") break;

        istringstream iss(line);
        string first, second;
        iss >> first >> second;

        int id;
        if (isValidId(first, id)) {
            validCompanies.push_back(line);
        } else if (isValidId(second, id)) {
            validCompanies.push_back(line);
        }
    }

    for (const string& company : validCompanies) {
        cout << company << endl;
    }

    return 0;
}

