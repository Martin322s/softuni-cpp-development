#ifndef SUMOFVECTORS_H
#define SUMOFVECTORS_H

#include <string>
#include <vector>
#include <sstream>

std::vector<std::string> operator+(
	const std::vector<std::string> & first, 
	const std::vector<std::string> & second
) {
	std::vector<std::string> vec3;
	vec3.reserve(first.size());
	
	for(int i = 0; i < first.size(); i++) {
		std::string curr = first[i] + " " + second[i];
		vec3.push_back(curr);
	}
	
	return vec3;
}

#endif

