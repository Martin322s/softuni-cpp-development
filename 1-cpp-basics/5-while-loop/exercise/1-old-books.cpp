#include <iostream>
#include <string>

using namespace std;

int main() {
    string wantedBook;
    getline(cin, wantedBook);
    
    string currentBook;
    int count = 0;
    
    while (getline(cin, currentBook) && currentBook != "No More Books") {
        if (currentBook == wantedBook) {
            cout << "You checked " << count << " books and found it." << endl;
            return 0;
        }
        count++;
    }

    cout << "The book you search is not here!" << endl;
    cout << "You checked " << count << " books." << endl;

    return 0;
}
