#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    string input;
    int primeSum = 0, nonPrimeSum = 0;

    while (true) {
        cin >> input;
        if (input == "stop") break;

        int num = stoi(input);
        if (num < 0) {
            cout << "Number is negative." << endl;
            continue;
        }

        if (isPrime(num)) primeSum += num;
        else nonPrimeSum += num;
    }

    cout << "Sum of all prime numbers is: " << primeSum << endl;
    cout << "Sum of all non prime numbers is: " << nonPrimeSum << endl;

    return 0;
}
