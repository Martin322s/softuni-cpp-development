#include <iostream>
#include <vector>
#include <sstream>
#include <string>

using namespace std;

int main() {
    string line;
    getline(cin, line);

    istringstream stream(line);
    vector<int> numbers;
    int num;

    while (stream >> num) {
        numbers.push_back(num);
    }

    vector<int> result;
    int n = numbers.size();

    for (int i = 0; i < n / 2; i++) {
        result.push_back(numbers[i] + numbers[n - 1 - i]);
    }

    if (n % 2 != 0) {
        result.push_back(numbers[n / 2]);
    }

    for (int el : result) {
        cout << el << " ";
    }

    cout << endl;
    return 0;
}
