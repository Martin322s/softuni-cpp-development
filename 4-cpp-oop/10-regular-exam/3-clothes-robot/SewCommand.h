#ifndef SEWCOMMAND_H
#define SEWCOMMAND_H

#include "TimedCommand.h"

#include <list>
#include <string>

class SewCommand : public TimedCommand {

    size_t time;
    std::list<std::string> elements;

    public:

        SewCommand(Processor & proc) : Command(proc), TimedCommand(proc) {}

        virtual std::string getName(void) const override { return "sew"; }

        virtual void read(std::istream & istr) override {
            Command::read(istr);
            TimedCommand::read(istr);
            std::string newId;
            while(istr >> newId)
                elements.push_back(newId);
        }

        virtual std::string execute(void) const override;

};

#endif