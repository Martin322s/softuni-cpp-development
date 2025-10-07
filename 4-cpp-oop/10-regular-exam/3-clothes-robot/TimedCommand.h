#ifndef TIMEDCOMMAND_H
#define TIMEDCOMMAND_H

#include "Command.h"

class TimedCommand : virtual public Command {
    unsigned time;

    public:

        TimedCommand(Processor & p) : Command(p), time(0) {}

        virtual void read(std::istream & istr) override {
            // virtual inheritance : will never call the base class Read - the successors must call it, if needed
            istr >> time;
        }

        unsigned getTime(void) const {
            return time;
        };
};

#endif