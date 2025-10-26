#include "Register.h"

Register::Register(size_t numCompanies) : 
	companiesArray(new Company[numCompanies]), numAdded(0) {}

void Register::add(const Company& c) {
	companiesArray[numAdded] = c;
	numAdded++;
}

Company Register::get(int companyId) const {
	for(size_t idx = 0; idx < numAdded; idx++) {
		if (companiesArray[idx].getId() == companyId) {
			return companiesArray[idx];
		}
	}
	
	return Company();
}

Register::~Register() {
	if (companiesArray != nullptr) {
		delete [] companiesArray;
	}
}
