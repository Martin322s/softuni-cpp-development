#pragma once

#include <string>
#include <iostream>
#include <memory>
#include <vector>
#include <sstream>

using namespace std;

#include "BaseStudent.h"

class Student : public BaseStudent {
	
	public:
   	 	void init(std::istream &iS) override {
        	iS >> name >> grade;
    	}
};


bool readStudent(std::vector<std::shared_ptr<Student>> &data, const std::string &buffer) {
    if (buffer.empty()) return false;

    std::istringstream iss(buffer);
    auto st = std::make_shared<Student>();
    st->init(iss);

    if (!iss) return false;
    data.push_back(st);
    return true;
}

vector<int> processStudents(const vector<shared_ptr<Student>> & data) {
	vector<int> result(10, 0);
	
	for(auto it = data.begin(); it != data.end(); it++) {
		auto student = (*it);
		int currentGrade = student->getGrade();
		
		int index = currentGrade / 10;
		if (index >= 0 && index <= 9)
    		result[index]++;
	}
	
	return result;
}
