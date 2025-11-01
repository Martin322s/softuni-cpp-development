#include "SolfegeNoteNaming.h"

NoteName SolfegeNoteNaming::operator()(const std::string & solName) const {
		if (solName == "Do") {
			return NoteName('C');
		} else if (solName == "Re") {
			return NoteName('D');
		} else if (solName == "Mi") {
			return NoteName('E');
		} else if (solName == "Fa") {
			return NoteName('F');
		} else if (solName == "Sol") {
			return NoteName('G');
		} else if (solName == "La") {
			return NoteName('A');
		} else if (solName == "Si") {
			return NoteName('B');
		} else {
			return NoteName('?');
		}
}

