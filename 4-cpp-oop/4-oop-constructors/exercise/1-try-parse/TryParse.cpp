#include "TryParse.h"

#include <string>
#include <sstream>

using namespace std;

class TryParse {
	istringstream istr;
	int & number;
	
	public:
		TryParse(const string & str, int & number) : 
			istr(str), number(number) {
				istr >> number;
			}
			
		inline operator bool() const {
			return (bool)istr;
		}
};

bool tryParse(const string & str, int & number) {
	TryParse parser(str, number);
	
	return parser;
}
