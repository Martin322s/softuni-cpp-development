#include <iostream>
#include <string>
#include <sstream>
#include <list>

#include "Company.h"

#include "RemoveDuplicates.h"

int main() {
	using namespace std;

	cin.sync_with_stdio(false);
	cout.sync_with_stdio(false);

	list<Company*> companies;
	string line;
	Company* lastCompany = nullptr;
	while (getline(cin, line) && line != "end") {
		if (line[0] != '*') {
			lastCompany = new Company();
			istringstream(line) >> *lastCompany;
			companies.push_back(lastCompany);
		}
		else {
			if (lastCompany == nullptr) {
				throw exception(); // error in parsing - tests or skeleton is wrong
			}

			if (line == "*begin") {
				companies.insert(companies.begin(), lastCompany);
			}
			else if (line == "*end") {
				companies.insert(companies.end(), lastCompany);
			}
			else {
				throw exception(); // error in parsing - tests or skeleton is wrong
			}
		}
	}

	removeDuplicates(companies);

	for (Company* companyPtr : companies) {
		cout << *companyPtr << endl;
	}
}