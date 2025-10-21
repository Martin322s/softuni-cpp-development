#include <iostream>
#include <string>
#include <limits>
using namespace std;

int getMax(int a, int b) {
    return (a > b) ? a : b;
}

char getMax(char a, char b) {
    return (a > b) ? a : b;
}

string getMax(string a, string b) {
    return (a > b) ? a : b;
}

int main() {
    string type;
    
    getline(cin, type);
    
    if (type == "int") {
        int a, b;
        cin >> a >> b;
        cout << getMax(a, b) << endl;
    }
    else if (type == "char") {
        char a, b;
        cin >> a >> b;
        cout << getMax(a, b) << endl;
    }
    else if (type == "string") {
        string a, b;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        getline(cin, a);
        getline(cin, b);
        cout << getMax(a, b) << endl;
    }
    else {
        cout << "Invalid type! Please enter 'int', 'char', or 'string'." << endl;
    }
    
    return 0;
}
