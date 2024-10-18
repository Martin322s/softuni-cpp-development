#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    double result;
    string figureType;
    cin >> figureType;

    if (figureType == "rectangle") {
        double sideA, sideB;
        cin >> sideA >> sideB;

        result = sideA * sideB;
    } 
    else if (figureType == "square") {
        double sideA;
        cin >> sideA;

        result = sideA * sideA;
    } 
    else if (figureType == "triangle") {
        double sideA, height;
        cin >> sideA >> height;

        result = 0.5 * sideA * height;
    } 
    else if (figureType == "circle") {
        double radius;
        cin >> radius;

        const double PI = 3.141592653589793;
        result = PI * (radius * radius);
    }
    
    result = floor(result * 1000) / 1000;

    cout.setf(ios::fixed);
    cout.precision(3);

    cout << result << endl;

    return 0;
}
