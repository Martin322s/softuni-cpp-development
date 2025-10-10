#include "Defines.h"
#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

ErrorCode executeCommand(const string &  command, vector<int *> & memory) 
{
	static int allocated = 0;
	istringstream istr(command);
	 
	string cmd;
	istr >> cmd;
	 
	if (cmd == "Idle") {
		return ErrorCode::EXECUTE_IDLE;
	}
	 
	int index;
	istr >> index;
	 
	if (index >= memory.size()) {
		return ErrorCode::INDEX_OUT_OF_BOUND;
	}
	 
	if (cmd == "Allocate") {
		if (memory[index] != nullptr) {
	 		return ErrorCode::MEMORY_LEAK;
		}
		 
		memory[index] = &allocated;
		
		return ErrorCode::EXECUTE_SUCCESS;
	} else {
		if (memory[index] == nullptr) {
	 		return ErrorCode::DOUBLE_FREE;
		}
		
		memory[index] = nullptr;
		
		return ErrorCode::EXECUTE_SUCCESS;
	}
}
                     

void printResult(const ErrorCode errorCode, const string & command)
{
	string message;
	
	switch(errorCode) {
		case ErrorCode::EXECUTE_SUCCESS:
			message = "success"; break;
		case ErrorCode::EXECUTE_IDLE:
			message = "this exam is a piece of cake! Where is the OOP already?!?"; break;
		case ErrorCode::MEMORY_LEAK:
			message = "memory leak prevented, will not make allocation"; break;
		case ErrorCode::DOUBLE_FREE:
			message = "system crash prevented, will skip this deallocation"; break;
		case ErrorCode::INDEX_OUT_OF_BOUND:
			message = "out of bound"; break;
	}
	
	cout << command << " - " << message << endl;
}
