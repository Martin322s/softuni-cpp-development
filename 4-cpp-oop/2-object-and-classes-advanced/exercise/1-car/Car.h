#ifndef CAR_H
#define CAR_H

#include <string>

using namespace std;

class Car {
	string brand;
	string model;
	int year;
	
	public:
		Car(string brand, string model, int year) : 
			brand(brand), 
			model(model), 
			year(year) 
		{
			
		}
	
		string GetBrand() const {
			return this->brand;
		}
	
		string GetModel() const {
			return this->model;
		}
	
		int GetYear() const {
			return this->year;
		}
};

#endif
