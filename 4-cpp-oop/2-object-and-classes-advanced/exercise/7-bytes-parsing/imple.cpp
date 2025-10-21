#include <iostream>
#include <string>
#include <vector>
#include "Defines.h"

using namespace std;

ErrorCode parseShort(const char* & rawDataBytes, const char * rawDataBytesEnd, long long & parsed) {
	if (rawDataBytesEnd - rawDataBytes < sizeof(short)) {
		return ErrorCode::PARSE_FAILURE; // not enough buffer!
	}
	
	parsed = *(short*)rawDataBytes;
	rawDataBytes += sizeof(short);
	
	return ErrorCode::PARSE_SUCCESS;
}

ErrorCode parseInt(const char* & rawDataBytes, const char * rawDataBytesEnd, long long & parsed) {
	if (rawDataBytesEnd - rawDataBytes < sizeof(int)) {
		return ErrorCode::PARSE_FAILURE; // not enough buffer!
	}
	
	parsed = *(int*)rawDataBytes;
	rawDataBytes += sizeof(int);
	
	return ErrorCode::PARSE_SUCCESS;
}

ErrorCode parseLong(const char* & rawDataBytes, const char * rawDataBytesEnd, long long & parsed) {
	if (rawDataBytesEnd - rawDataBytes < sizeof(long long)) {
		return ErrorCode::PARSE_FAILURE; // not enough buffer!
	}
	
	parsed = *(long long*)rawDataBytes;
	rawDataBytes += sizeof(long long);
	
	return ErrorCode::PARSE_SUCCESS;
}

ErrorCode parseData(const std::string &      commands,
                    const char *             rawDataBytes,
                    const size_t	   	     rawDataBytesCount,
                    std::vector<long long> & outParsedNumbers)
{
   	if (rawDataBytesCount == 0 || commands.size() == 0) {
   		return PARSE_EMPTY;	
	}
	
	ErrorCode res;
	long long parsed;
	
	const char* rawDataBytesEnd = rawDataBytes + rawDataBytesCount;
	
	for(char c : commands) {
		switch(c) {
			case 'i':
				res = parseInt(rawDataBytes, rawDataBytesEnd, parsed);
				break;
			case 's':
				res = parseShort(rawDataBytes, rawDataBytesEnd, parsed);
				break;
			case 'l':
				res = parseLong(rawDataBytes, rawDataBytesEnd, parsed);
				break;	
		}
		
		if (res != PARSE_SUCCESS) {
			return res;
		}
		
		outParsedNumbers.push_back(parsed);
	}
	
	return ErrorCode::PARSE_SUCCESS;
}

void printResult(const ErrorCode                errorCode,
                 const std::vector<long long> & parsedNumbers)
{
	if (errorCode == ErrorCode::PARSE_EMPTY) {
		cout << "No input provided" << endl;
		
		return;
	}
	
	for (auto l : parsedNumbers) {
		cout << l << ' ';
	}
	
	if (errorCode == ErrorCode::PARSE_FAILURE)
		cout << "Warning, buffer underflow detected";
		
	cout << endl;
}
