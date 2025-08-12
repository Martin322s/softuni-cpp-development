#include <iostream>
#include <string>
using namespace std;

class Car
{
	string brand;
	string model;
	double mileage;

public:
	Car(string b, string m, double km)
	{
		brand = b;
		model = m;
		mileage = km;
	}
	void drive(double km)
	{
		mileage += km;
	}
	void setModel(const string &m)
	{
		model = m;
	}
	string getInfo() const
	{
		return brand + " " + model + " - " + to_string(mileage) + " km";
	}
};

int main()
{
	Car c("Toyota", "Corolla", 50000);
	c.drive(120);
	cout << c.getInfo() << endl;
}
