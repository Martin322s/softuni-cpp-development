#include "Command.h"
#include <vector>
#include <algorithm>
#include <sstream>

std::string Command::abortMessage(const std::string & invalidId) const {
    std::ostringstream oss;
    
    std::vector<std::string> ids;
    for (const auto & pair : proc.storage) {
        ids.push_back(pair.first);
    }
    std::sort(ids.begin(), ids.end());
    
    unsigned totalMaterial = 0;
    unsigned totalTime = 0;
    for (const auto & pair : proc.storage) {
        totalMaterial += pair.second.mat;
        totalTime += pair.second.time;
    }
    
    oss << "Aborting on " << getName() << " due to invalid ID \"" << invalidId << "\". Lost pieces ";
    
    for (size_t i = 0; i < ids.size(); ++i) {
        oss << ids[i];
        if (i < ids.size() - 1)
            oss << ", ";
    }
    
    oss << ", lost material " << totalMaterial << ", wasted time " << totalTime << ".";
    
    return oss.str();
}

std::string Command::successMessage() const {
    std::ostringstream oss;
    
    std::vector<std::string> ids;
    for (const auto & pair : proc.storage) {
        ids.push_back(pair.first);
    }
    std::sort(ids.begin(), ids.end());
    
    unsigned totalMaterial = 0;
    unsigned totalTime = 0;
    for (const auto & pair : proc.storage) {
        totalMaterial += pair.second.mat;
        totalTime += pair.second.time;
    }
    
    oss << "Packing and shipping new order: \"";
    
    for (size_t i = 0; i < ids.size(); ++i) {
        oss << ids[i];
        if (i < ids.size() - 1)
            oss << ", ";
    }
    
    oss << "\". Production material: " << totalMaterial << ", production time: " << totalTime << ".";
    
    return oss.str();
}
