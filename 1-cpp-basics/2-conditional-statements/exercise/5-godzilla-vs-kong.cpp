#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double budget;
    int extrasCount;
    double clothesPricePerExtra;

    cin >> budget;
    cin >> extrasCount;
    cin >> clothesPricePerExtra;

    double decorCost = budget * 0.10;
    double clothesCost = extrasCount * clothesPricePerExtra;

    if (extrasCount > 150) {
        clothesCost *= 0.90;
    }

    double totalCost = decorCost + clothesCost;
    cout << fixed << setprecision(2);
    
    if (totalCost > budget) {
        cout << "Not enough money!" << endl;
        cout << "Wingard needs " << totalCost - budget << " leva more." << endl;
    } else {
        cout << "Action!" << endl;
        cout << "Wingard starts filming with " << budget - totalCost << " leva left." << endl;
    }

    return 0;
}
