#include <iostream>
#include <memory>
#include <cctype>

using namespace std;

const int MAX_LINE_SIZE = 200;

size_t readLine(char* buffer, istream& in) {
	size_t lineSize = 0;
	char curr;

	while (in.get(curr)) {
		if (curr == '\n') break;

		buffer[lineSize++] = curr;
		if (lineSize >= MAX_LINE_SIZE - 1) break;
	}

	buffer[lineSize] = '\0';
	return lineSize;
}

unique_ptr<char[]> processorLine(const char* line, size_t lineSize, int(*processor)(int)) {
	unique_ptr<char[]> result = make_unique<char[]>(lineSize + 1);

	for (size_t i = 0; i < lineSize; ++i) {
		result[i] = processor(static_cast<unsigned char>(line[i]));
	}

	result[lineSize] = '\0';
	return result;
}

int main() {
	char* line = new char[MAX_LINE_SIZE];
	size_t lineSize = readLine(line, cin);

	unique_ptr<char[]> allLowerCase = processorLine(line, lineSize, ::tolower);
	unique_ptr<char[]> allUpperCase = processorLine(line, lineSize, ::toupper);

	cout << allLowerCase.get() << endl;
	cout << allUpperCase.get() << endl;

	delete[] line;
	return 0;
}

