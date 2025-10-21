#ifndef MATERIALCOMMAND_H
#define MATERIALCOMMAND_H

#include "Command.h"

class MaterialCommand : virtual public Command {
    unsigned material;

    public:

        MaterialCommand(Processor & p) : Command(p), material(0) {}

        unsigned getMaterial(void) const { return material; };

        virtual void read(std::istream & istr) override {
            // virtual inheritance : will never call the base class Read - the successors must call it, if needed
            istr >> material;
        }

};

#endif