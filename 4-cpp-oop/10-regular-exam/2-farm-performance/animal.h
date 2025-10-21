#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

class Animal {

    public:

        virtual ~Animal() = default;

        virtual unsigned getResult(unsigned weeks) const = 0;

        virtual std::string getDescription() const = 0;
        virtual std::string getInfo() const = 0;

};

#endif