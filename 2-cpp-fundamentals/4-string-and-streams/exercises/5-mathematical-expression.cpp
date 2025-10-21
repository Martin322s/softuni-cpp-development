#include <iostream>
#include <string>

using namespace std;

int main() {
    string expression;
    cin >> expression;

    int openBracketsCount = 0;
    int closedBracketsCount = 0;

    for (const char element : expression) {
        if (element == '(') {
            openBracketsCount++;
        } else if (element == ')') {
            closedBracketsCount++;
        }
    }

    if (openBracketsCount == closedBracketsCount)
        cout << "correct" << endl;
    else
        cout << "incorrect" << endl;

    return 0;
}
