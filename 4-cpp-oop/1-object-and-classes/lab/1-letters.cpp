#include <string>
#include <iostream>
#include <sstream>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <algorithm>
#include <cctype>

using namespace std;

int main(void) {

    string buf;
    getline(cin, buf);

    for(char & c : buf)
        //if ( !(c >= 'A' && c <='Z') && !(c>='a' && c <= 'z'))
        if (ispunct(c))
            c = ' ';

    istringstream istr(buf);
    set<string> words;
    string tmp;
    while(istr >> tmp)
        words.insert(tmp);

    while(true) {

        char c;
        cin >> c;

        if (c == '.')
            break;

        c = ::tolower(c);
        bool bFound = false;
        for(const string & curr : words) {
            string transformed = curr; 
            transform(transformed.begin(), transformed.end(), transformed.begin(), ::tolower);
            if (transformed.find(c) != string::npos) {
                bFound = true;
                cout << curr << " ";
            }
        }

        if (!bFound)
            cout << "---";

        cout << endl;
    }


    return 0;
}
