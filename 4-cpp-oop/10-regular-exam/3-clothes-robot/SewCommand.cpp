#include "SewCommand.h"

std::string SewCommand::execute(void) const {
    if (existsData(getId()))
        return abortMessage(getId());

    for (const auto & elemId : elements) {
        if (!existsData(elemId))
            return abortMessage(elemId);
    }

    unsigned totalTime = getTime();
    unsigned totalMaterial = 0;

    for (const auto & elemId : elements) {
        Processor::TimeAndMaterial tm = getData(elemId);
        totalTime += tm.time;
        totalMaterial += tm.mat;
    }

    for (const auto & elemId : elements) {
        eraseData(elemId);
    }

    Processor::TimeAndMaterial newTm(totalTime, totalMaterial);
    insertData(newTm);

    return "";
}
