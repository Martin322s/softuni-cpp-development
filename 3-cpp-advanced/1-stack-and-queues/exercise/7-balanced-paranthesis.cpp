#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool isMatching(char open, char close) {
    return (open == '(' && close == ')') ||
           (open == '{' && close == '}') ||
           (open == '[' && close == ']');
}

int main() {
    string input;
    cin >> input;

    stack<char> s;

    for (char ch : input) {
        if (ch == '(' || ch == '{' || ch == '[') {
            s.push(ch);
        } else {
            if (s.empty() || !isMatching(s.top(), ch)) {
                cout << "NO" << endl;
                return 0;
            }
            s.pop();
        }
    }

    cout << (s.empty() ? "YES" : "NO") << endl;

    return 0;
}
