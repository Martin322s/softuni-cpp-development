#include <iostream>
#include <cmath>
using namespace std;

class Circle
{
	double radius;

public:
	Circle(double r)
	{
		radius = r;
	}
	double getArea() const
	{
		return M_PI * radius * radius;
	}
	double getPerimeter() const
	{
		return 2 * M_PI * radius;
	}
	void setRadius(double r)
	{
		radius = r;
	}
};

int main()
{
	Circle c(5);
	cout << "Area: " << c.getArea() << endl;
	cout << "Perimeter: " << c.getPerimeter() << endl;
}
