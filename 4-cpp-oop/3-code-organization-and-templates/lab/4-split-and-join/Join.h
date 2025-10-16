#pragma once

#include <string>
#include <vector>
#include <sstream>

template <class T>
std::string join(const std::vector<T> & v, const std::string & joinStr) {
	std::ostringstream ostr;
	bool bFirst = true;
	
	for (const T & curr : v) {
		if (bFirst) {
			bFirst = false;
		} else {
			ostr << joinStr;
		}
		
		ostr << curr;
	}
	
	return ostr.str();
}
