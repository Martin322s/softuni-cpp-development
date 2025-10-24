#ifndef PROFIT_REPORT_H
#define PROFIT_REPORT_H

#include "Company.h"
#include "ProfitCalculator.h"

#include <sstream>
#include <map>

template <class EntityIterator>
std::string getProfitReport(EntityIterator fromInclusive, EntityIterator toInclusive, std::map<int, ProfitCalculator>& profitCalculatorsByCompany) {
	std::ostringstream ostr;
	
	for(;;) {
		int profit = profitCalculatorsByCompany[fromInclusive->getId()].calculateProfit(*fromInclusive);
		
		ostr << fromInclusive->getName() << " = " << profit << std::endl;
		
		if (fromInclusive == toInclusive) {
			break;
		}
		
		fromInclusive++;
	}
	
	return ostr.str();
}

#endif
