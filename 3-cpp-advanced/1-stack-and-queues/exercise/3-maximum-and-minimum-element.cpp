#include <iostream>
#include <stack>
#include <sstream>
#include <climits>

using namespace std;

int getMin(stack<int> s) {
    int mn = INT_MAX;
    
    while (!s.empty()) {
        mn = min(mn, s.top());
        s.pop();
    }
    
    return mn;
}

int getMax(stack<int> s) {
    int mx = INT_MIN;
    
    while (!s.empty()) {
        mx = max(mx, s.top());
        s.pop();
    }
    
    return mx;
}

int main() {
    int n;
    cin >> n;
    cin.ignore();  

    stack<int> numbers;

    while (n--) {
        string line;
        getline(cin, line);

        istringstream iss(line);
        char type; iss >> type;

        if (type == '1') {
            int x; iss >> x;
            numbers.push(x);
        }
        else if (type == '2') {
            if (!numbers.empty()) 
				numbers.pop();
        }
        else if (type == '3') {
            if (!numbers.empty()) 
				cout << getMax(numbers) << '\n';
        }
        else if (type == '4') {
            if (!numbers.empty()) 
				cout << getMin(numbers) << '\n';
        }
    }

    while (!numbers.empty()) {
        cout << numbers.top();
        numbers.pop();
        if (!numbers.empty()) cout << ", ";
    }
    
    return 0;
}
