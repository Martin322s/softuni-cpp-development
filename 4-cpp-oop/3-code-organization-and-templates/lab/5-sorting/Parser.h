#pragma once

#include <sstream>
#include <string>

template <typename T> class Parser {
	std::istream & is;
	std::string stopLine;
	
	public:
		Parser(std::istream & is, std::string stopLine) : is(is), stopLine(stopLine) {};
		
		bool readNext(T & res) {
			std::string currLine;
			getline(is, currLine);
			
			if (currLine == stopLine) {
				return false;
			}
			
			std::istringstream istr(currLine);
			istr >> res;
			
			return true;
		}
};
