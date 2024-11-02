#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double budget;
    int videoCardsCount, processorsCount, ramCount;
    
    cin >> budget;
    cin >> videoCardsCount;
    cin >> processorsCount;
    cin >> ramCount;

    double videoCardPrice = 250.0;
    double totalVideoCardsCost = videoCardsCount * videoCardPrice;

    double processorPrice = 0.35 * totalVideoCardsCost;
    double totalProcessorsCost = processorsCount * processorPrice;

    double ramPrice = 0.10 * totalVideoCardsCost;
    double totalRamCost = ramCount * ramPrice;
    double totalCost = totalVideoCardsCost + totalProcessorsCost + totalRamCost;

    if (videoCardsCount > processorsCount) {
        totalCost *= 0.85;
    }

    cout << fixed << setprecision(2);
    
    if (budget >= totalCost) {
        cout << "You have " << budget - totalCost << " leva left!" << endl;
    } else {
        cout << "Not enough money! You need " << totalCost - budget << " leva more!" << endl;
    }

    return 0;
}
