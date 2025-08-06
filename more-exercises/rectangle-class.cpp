#include <iostream>
using namespace std;

class Rectangle
{
	double width, height;

public:
	Rectangle(double w, double h)
	{
		width = w;
		height = h;
	}
	double getArea() const
	{
		return width * height;
	}
	double getPerimeter() const
	{
		return 2 * (width + height);
	}
	void scale(double factor)
	{
		width *= factor;
		height *= factor;
	}
};

int main()
{
	Rectangle r(4, 5);
	cout << r.getArea() << endl;
	cout << r.getPerimeter() << endl;
	r.scale(2);
	cout << r.getArea() << endl;
}