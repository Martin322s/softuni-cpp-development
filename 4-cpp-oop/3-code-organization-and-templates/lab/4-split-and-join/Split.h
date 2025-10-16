#pragma once

#include <vector>
#include <string>
#include <sstream>

template<class T>
std::vector<T> split(const std::string & line, char separator) {
	std::vector<T> res;
	
	std::istringstream istr(line);
	std::string buff;
	
	while(getline(istr, buff, separator)) {
		std::istringstream elStr(buff);
		
		T curr;
		
		elStr >> curr;
		
		res.push_back(curr);
	}
	
	return res;
}
