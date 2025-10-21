#ifndef CUTCOMMAND_H
#define CUTCOMMAND_H

#include "TimedCommand.h"
#include "MaterialCommand.h"

class CutCommand : public TimedCommand, public MaterialCommand {

    public:

        CutCommand(Processor & proc) : Command(proc), TimedCommand(proc), MaterialCommand(proc) {}

        virtual std::string getName(void) const override { return "cut"; }

        virtual void read(std::istream & istr) override {
            Command::read(istr); // read the main Command (virtual inheritance!)
            TimedCommand::read(istr); // read the TimedCommand
            MaterialCommand::read(istr); // read the MaterialCommand
        }

        virtual std::string execute(void) const override {
            
            // check if this ID already exists in the storage
            if (existsData(getId()))
                // if yes - abort with that error
                return abortMessage(getId());

            // we can create new element now:
            Processor::TimeAndMaterial tm(getTime(), getMaterial());
            insertData(tm); // insert the new element in the storage

            return "";
        }

};

#endif