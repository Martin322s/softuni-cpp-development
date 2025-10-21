#include <iostream>
#include <string>
#include <stack>
#include <vector>
using namespace std;

int main() {
    vector<int> memory;
    string input;

    while (getline(cin, input)) {
        if (input == "end") break;

        if (input == "sum") {
            int a = memory.back(); 
			memory.pop_back();
			
            int b = memory.back(); 
			memory.pop_back();
			
            memory.push_back(a + b);
        } else if (input == "subtract") {
            int a = memory.back(); 
			memory.pop_back();
			
            int b = memory.back(); 
			memory.pop_back();
			
            memory.push_back(a - b);
        } else if (input == "concat") {
            int a = memory.back(); memory.pop_back();
            int b = memory.back(); memory.pop_back();

            string concatStr = to_string(b) + to_string(a);
            int result = stoi(concatStr);
            memory.push_back(result);
        } else if (input == "discard") {
            memory.pop_back();
        } else {
            memory.push_back(stoi(input));
        }
    }

    for (int num : memory) {
        cout << num << endl;
    }

    return 0;
}
