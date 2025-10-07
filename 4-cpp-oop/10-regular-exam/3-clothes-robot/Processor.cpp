#include <sstream>

using namespace std;

#include "Processor.h"

#include "CutCommand.h"
#include "SewCommand.h"
#include "IronCommand.h"
#include "PackCommand.h"

bool Processor::processInput(const std::string & commandStr) {

    istringstream istr(commandStr);

    string cmd;
    istr >> cmd;

    shared_ptr<Command> command(nullptr);

    if (cmd == "cut")
        command = make_shared<CutCommand>(*this);
    else if (cmd == "sew")
        command = make_shared<SewCommand>(*this);
    else if (cmd == "pack")
        command = make_shared<PackCommand>(*this);
    else if (cmd == "iron")
        command = make_shared<IronCommand>(*this);
    else if (cmd == "pack")
        command = make_shared<PackCommand>(*this);

    command->read(istr);

    commands.push_back(command);

    return dynamic_pointer_cast<PackCommand>(command).get() != nullptr;
}

std::string Processor::execute(void) {

    for(auto a : commands) {
        
        std::string message = a->execute();

        if (message.size()) {
            commands.clear();
            storage.clear();
            return message;
        }
    }

    return "";
}
