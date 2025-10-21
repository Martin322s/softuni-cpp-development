#include <string>
#include <iostream>

#include "Processor.h"

using namespace std;

int main(void) {

    Processor proc;

    string str;
    while(getline(cin, str)) {

        if (str[0] == 'e' && str.length() == 3)
            break;

        if (proc.processInput(str)) {
            cout << proc.execute() << endl;
        }
    }

    return 0;
}
