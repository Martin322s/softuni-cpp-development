#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <optional>
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

static inline string trim(const string &s)
{
	size_t l = 0, r = s.size();
	while (l < r && isspace((unsigned char)s[l]))
		l++;
	while (r > l && isspace((unsigned char)s[r - 1]))
		r--;
	return s.substr(l, r - l);
}

optional<LogEntry> parseLineNoRegex(const string &line)
{
	size_t pos = line.find(' ');
	if (pos == string::npos)
		return nullopt;
	string ip = line.substr(0, pos);

	size_t q1 = line.find('"', pos);
	if (q1 == string::npos)
		return nullopt;
	size_t q2 = line.find('"', q1 + 1);
	if (q2 == string::npos)
		return nullopt;

	string request = line.substr(q1 + 1, q2 - (q1 + 1));
	istringstream req(request);
	string method, url, protocol;
	if (!(req >> method >> url >> protocol))
		return nullopt;

	size_t after = q2 + 1;
	while (after < line.size() && line[after] == ' ') after++;
}

int main()
{

	return 0;
}