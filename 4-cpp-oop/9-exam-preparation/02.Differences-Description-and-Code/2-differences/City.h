#ifndef CITY_H
#define CITY_H

#include <string>
#include <cstddef>

class City {
	unsigned int censusYear;
	std::string name;
	size_t population;
public:
	City() : censusYear(-1), name("[invalid]"), population(-1) {}

	City(unsigned int censusYear, std::string name, size_t population) 
		: censusYear(censusYear), name(name), population(population) {}

	unsigned int getCensusYear() const {
		return this->censusYear;
	}

	std::string getName() const {
		return this->name;
	}

	size_t getPopulation() const {
		return this->population;
	}
};

#endif // !CITY_H

