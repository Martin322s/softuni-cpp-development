#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

/*
Примерен формат на ред (Combined/Common Log):
127.0.0.1 - - [10/Oct/2020:13:55:36 +0300] "GET /index.html HTTP/1.1" 200 2326
*/

struct LogEntry
{
	string ip;
	string method;
	string url;
	string protocol;
	int status = 0;
	long bytes = 0;
};

static inline string trim(const string& s) {
    size_t l = 0, r = s.size();
    while (l < r && isspace((unsigned char)s[l])) l++;
    while (r > l && isspace((unsigned char)s[r-1])) r--;
    return s.substr(l, r - l);
}

int main()
{

	return 0;
}