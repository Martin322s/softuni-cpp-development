#ifndef CITY_H
#define CITY_H

#include <string>
#include <cstddef>

class City {
	std::string name;
	size_t population;
public:
	City(std::string name, size_t population) : name(name), population(population) {}

	std::string getName() const {
		return this->name;
	}

	size_t getPopulation() const {
		return this->population;
	}
};

#endif // !CITY_H

