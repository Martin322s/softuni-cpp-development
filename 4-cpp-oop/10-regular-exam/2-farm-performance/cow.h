#pragma once

#include "animal.h"

#include <iostream>
#include <sstream>

class Cow : public Animal {

    unsigned milkLiters; 

    public:

        Cow(std::istream & istr) : milkLiters(0) {
            istr >> milkLiters;
        }

        virtual unsigned getResult(unsigned weeks) const {
            return milkLiters * 7 * weeks;
        };

        virtual std::string getDescription() const { return "Cow"; }
        
        virtual std::string getInfo() const {
            std::ostringstream ostr;
            ostr << '<' << milkLiters << ">";

            return ostr.str();
        }

};
