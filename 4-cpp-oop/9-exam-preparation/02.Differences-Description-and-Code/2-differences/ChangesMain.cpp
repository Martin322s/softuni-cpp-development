#include "Includes.h"

std::vector<std::pair<City, City> > readCitiesToCompare(int num) {
	std::vector<std::pair<City, City> > result;
	for (int i = 0; i < num; i++) {
		City a, b;
		std::cin >> a >> b;
		result.push_back(std::make_pair(a, b));
	}

	return result;
}

std::vector<CityDiff> getDifferences(std::vector<std::pair<City, City> > pairs) {
	std::vector<CityDiff> differences;

	for (auto p : pairs) {
		differences.push_back(p.first - p.second);
	}

	return differences;
}

template<typename T>
void printVector(const std::vector<T>& v) {
	for (auto item : v) {
		std::cout << item;
	}
}

int main() {
	int numComparisons;
	std::cin >> numComparisons;
	std::vector<CityDiff> differences = getDifferences(readCitiesToCompare(numComparisons));

	printVector(differences);

	return 0;
}