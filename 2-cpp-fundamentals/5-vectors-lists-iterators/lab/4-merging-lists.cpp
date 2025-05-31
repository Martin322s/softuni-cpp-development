#include <iostream>
#include <sstream>
#include <vector>
#include <string>

using namespace std;

int main() {
    string line1, line2;
    getline(cin, line1);
    getline(cin, line2);

    istringstream stream1(line1), stream2(line2);
    vector<int> list1, list2, merged;

    int num;
    while (stream1 >> num) list1.push_back(num);
    while (stream2 >> num) list2.push_back(num);

    int maxLength = max(list1.size(), list2.size());
    for (int i = 0; i < maxLength; i++) {
        if (i < list1.size()) merged.push_back(list1[i]);
        if (i < list2.size()) merged.push_back(list2[i]);
    }

    for (int n : merged) cout << n << " ";
    cout << endl;

    return 0;
}
