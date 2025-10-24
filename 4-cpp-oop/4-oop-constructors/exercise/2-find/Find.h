#ifndef FIND_H
#define FIND_H

#include "Company.h"

Company* find(const std::vector<Company*> & v, int & searchId) {
	for(auto comp : v) {
		if ((*comp).getId() == searchId) {
			return comp;
		}
	}
	
	return nullptr;
}

#endif

