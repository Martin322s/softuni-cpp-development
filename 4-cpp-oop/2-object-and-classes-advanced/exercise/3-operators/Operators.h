#ifndef OPERATORS_H
#define OPERATORS_H

#include <ostream>
#include <vector>
#include <string>
#include <sstream>

std::vector<std::string>& operator<<(std::vector<std::string>& v, const std::string & str) {
	v.push_back(str);
	
	return v;
}

std::string operator+(const std::string & str, int i) {
	std::ostringstream ostr;
	
	ostr << str << i;
	
	return ostr.str();
}

std::ostream & operator<<(std::ostream & os, const std::vector<std::string> & v) {
	for (int i = 0; i < v.size(); i++) {
		os << v[i] << std::endl;
	}
	
	return os;
}

#endif
