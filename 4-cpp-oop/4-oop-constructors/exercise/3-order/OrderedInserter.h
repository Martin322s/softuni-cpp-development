#ifndef ORDERED_INSERTER_H 
#define ORDERED_INSERTER_H

#include "Company.h"

class OrderedInserter {
	std::vector<const Company*>& companies;
	
	public:
		OrderedInserter(std::vector<const Company*> & companies) : companies(companies) {}
		
		void insert(const Company* c) {
    		auto it = companies.begin();
    		for (; it != companies.end(); ++it) {
        		if ((*it)->getId() > c->getId() ||
           		((*it)->getId() == c->getId() && (*it)->getName() > c->getName())) {
           			 break;
        		}
    		}
    		
			companies.insert(it, c);
		}
};

#endif

