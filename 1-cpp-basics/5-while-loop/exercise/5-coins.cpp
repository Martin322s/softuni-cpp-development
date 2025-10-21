#include <iostream>
using namespace std;

int main() {
    double change;
    cin >> change;
    int coins = 0;
    
    int cents = change * 100;
    int coinValues[] = {200, 100, 50, 20, 10, 5, 2, 1};
    
    for (int coin : coinValues) {
        coins += cents / coin;
        cents %= coin;
    }
    
    cout << coins << endl;
    
    return 0;
}
