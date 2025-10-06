#ifndef CAT_H
#define CAT_H

#include "animal.h"

#include <iostream>
#include <sstream>

class Cat : public Animal {

    unsigned micePerDay; 
    unsigned activeDays;

    public:

        Cat(std::istream & istr) : micePerDay(0), activeDays(0) {
            istr >> micePerDay >> activeDays;
        }

        virtual unsigned getResult(unsigned weeks) const {
            return micePerDay * activeDays * weeks;
        };

        virtual std::string getDescription() const { return "Cat"; }
        
        virtual std::string getInfo() const {
            std::ostringstream ostr;
            ostr << '<' << micePerDay << ", " << activeDays << ">";

            return ostr.str();
        }

};

#endif