#pragma once

#include "NoteName.h"
#include <string>

struct SolfegeNoteNaming {
	NoteName operator()(const std::string & solName) const;
};
