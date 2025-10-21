#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

class Point {
    double x, y;
public:
    Point(double x, double y) : x(x), y(y) {}

    double distanceTo(const Point& other) const {
        return sqrt(pow(other.x - x, 2) + pow(other.y - y, 2));
    }
};

int main() {
    double x1, y1, x2, y2;
    cin >> x1 >> y1;
    cin >> x2 >> y2;

    Point p1(x1, y1);
    Point p2(x2, y2);

    cout << fixed << setprecision(3) << p1.distanceTo(p2) << endl;
    return 0;
}
