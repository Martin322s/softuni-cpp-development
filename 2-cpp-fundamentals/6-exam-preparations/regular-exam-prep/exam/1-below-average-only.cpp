#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> numbers(N);
    int sum = 0;

    for (int i = 0; i < N; i++) {
        cin >> numbers[i];
        sum += numbers[i];
    }

    int average = sum / N;
    vector<int> filtered;
    
    for (int i = 0; i < N; i++) {
        if (numbers[i] <= average) {
            filtered.push_back(numbers[i]);
        }
    }

    int evenSum = 0, oddSum = 0;
    
    for (int i = 0; i < filtered.size(); i++) {
        if (i % 2 == 0) {
            evenSum += filtered[i];
        } else {
            oddSum += filtered[i];
        }
    }

    cout << evenSum * oddSum << endl;
    
    return 0;
}
