#ifndef PROCESSOR_H
#define PROCESSOR_H

#include <list>
#include <memory>
#include <string>
#include <map>

class Command;

class Processor {

    public:

        friend class Command;

        struct TimeAndMaterial {
            unsigned time;
            unsigned mat;

            TimeAndMaterial() : time(0), mat(0) {};
            TimeAndMaterial(unsigned time, unsigned material) : time(time), mat(material) {}

        };

        bool processInput(const std::string & command);
        
        std::string execute(void);

        void setErrorId(const std::string & str) { errorId = str; }
        bool hasError(void) const { return errorId.size(); }

        void setSuccess(const std::string & str) { success = str; }
        bool hasSuccess(void) const { return success.size(); }

    private:

        std::list<std::shared_ptr<Command>> commands;

        std::map<std::string, TimeAndMaterial> storage;

        std::string errorId;
        std::string success;

};

#endif
