#include <iostream>
#include <string>
#include <vector>

#include "City.h"
#include "CityUtils.h"

int main() {
	std::cin.sync_with_stdio(false);
	std::cout.sync_with_stdio(false);

	std::vector<const City*> cities;

	int numCities;
	std::cin >> numCities;

	for (int i = 0; i < numCities; i++) {
		std::string name;
		size_t population;
		std::cin >> name >> population;

		cities.push_back(initCity(name, population));
	}

	size_t totalPopulation;
	auto citiesByPopulation = groupByPopulation(cities, totalPopulation);

	for (auto populationAndCity : citiesByPopulation) {
		std::cout << populationAndCity.second->getName() << " " << populationAndCity.first << std::endl;
	}
	std::cout << "total: " << totalPopulation << std::endl;

	for (const City* city : cities) {
		delete city;
	}

	return 0;
}