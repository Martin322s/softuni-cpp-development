#pragma once

#include "animal.h"

#include <iostream>
#include <sstream>

class Dog : public Animal {

    unsigned catsPerHour; 
    unsigned activeHours;

    public:

        Dog(std::istream & istr) : catsPerHour(0), activeHours(0) {
            istr >> catsPerHour >> activeHours;
        }

        virtual unsigned getResult(unsigned weeks) const {
            return catsPerHour * activeHours * 7 * weeks;
        };

        virtual std::string getDescription() const { return "Dog"; }
        
        virtual std::string getInfo() const {
            std::ostringstream ostr;
            ostr << '<' << catsPerHour << ", " << activeHours << ">";

            return ostr.str();
        }

};
