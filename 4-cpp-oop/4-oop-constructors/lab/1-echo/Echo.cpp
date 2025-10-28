#include "Echo.h"

bool echoOn = true;

void echo(const std::string & text) {
	if (echoOn) {
		std::cout << text << std::endl;
	}
}
