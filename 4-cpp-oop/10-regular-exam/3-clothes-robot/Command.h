#ifndef COMMAND_H
#define COMMAND_H

#include "Processor.h"
#include <string>
#include <iostream>

class Command {

    std::string id;

    protected:
        Processor & proc;

    public:

        Command(Processor & proc) : proc(proc), id("") { }
        virtual ~Command() = default;

        const std::string & getId(void) const { return id; }

        virtual void read(std::istream & istr) {
            istr >> id;
        };

        virtual std::string getName(void) const = 0;
        virtual std::string execute(void) const = 0;

        std::string abortMessage(const std::string & invalidId) const;
        std::string successMessage() const;

    protected:

        bool existsData(const std::string & id) const { return proc.storage.find(id) != proc.storage.end(); }
        bool eraseData(const std::string & id) const { return proc.storage.erase(id); }
        Processor::TimeAndMaterial getData(const std::string & id) const { return proc.storage[id]; }
        bool insertData(Processor::TimeAndMaterial tm) const { 
            return proc.storage.insert(std::pair<std::string, Processor::TimeAndMaterial>(id, tm)).second; 
        }

};

#endif