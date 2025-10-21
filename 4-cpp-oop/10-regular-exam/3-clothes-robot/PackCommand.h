#ifndef PACKCOMMAND_H
#define PACKCOMMAND_H

#include "Command.h"
#include <vector>
#include <algorithm>

class PackCommand : public Command {

    public:

        PackCommand(Processor & proc) : Command(proc) {}

        virtual std::string getName(void) const override { return "pack"; }

        virtual void read(std::istream & istr) override {

        }

        virtual std::string execute(void) const override {
            return successMessage();
        }

};

#endif
