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
	while (after < line.size() && line[after] == ' ')
		after++;

	string rest = (after < line.size()) ? line.substr(after) : "";

	istringstream tail(rest);
	int status = 0;
	string bytesStr;
	if (!(tail >> status >> bytesStr))
		return nullopt;

	long bytes = 0;
	if (bytesStr != "-" && !bytesStr.empty())
	{
		try
		{
			bytes = stol(bytesStr);
		}
		catch (...)
		{
			bytes = 0;
		}
	}

	LogEntry e;
	e.ip = ip;
	e.method = method;
	e.url = url;
	e.protocol = protocol;
	e.status = status;
	e.bytes = bytes;
	return e;
}

int main()
{
	string filename;
	cout << "Enter log file path: ";
	getline(cin, filename);

	ifstream in(filename);
	if (!in.is_open())
	{
		cerr << "Cannot open file: " << filename << "\n";
		return 1;
	}

	vector<LogEntry> logs;
	string line;
	while (getline(in, line))
	{
		auto e = parseLineNoRegex(line);
		if (e)
			logs.push_back(*e);
	}

	map<string, int> ipCount;
	map<int, int> statusCount;
	map<string, int> urlCount;
	long long totalBytes = 0;

	for (auto &e : logs)
	{
		ipCount[e.ip]++;
		statusCount[e.status]++;
		urlCount[e.url]++;
		totalBytes += e.bytes;
	}

	vector<pair<string, int>> topIps(ipCount.begin(), ipCount.end());
	sort(topIps.begin(), topIps.end(),
		 [](auto &a, auto &b)
		 { return a.second > b.second; });

	vector<pair<string, int>> topUrls(urlCount.begin(), urlCount.end());
	sort(topUrls.begin(), topUrls.end(),
		 [](auto &a, auto &b)
		 { return a.second > b.second; });

	cout << "\nParsed entries: " << logs.size() << "\n";
	cout << "Total bytes: " << totalBytes << "\n";

	cout << "\nHTTP Status Codes:\n";
	for (auto &[st, cnt] : statusCount)
	{
		cout << "  " << st << " -> " << cnt << "\n";
	}

	int N = 5;
	cout << "\nTop " << N << " IPs:\n";
	for (int i = 0; i < (int)topIps.size() && i < N; i++)
	{
		cout << "  " << topIps[i].first << " -> " << topIps[i].second << "\n";
	}

	cout << "\nTop " << N << " URLs:\n";
	for (int i = 0; i < (int)topUrls.size() && i < N; i++)
	{
		cout << "  " << topUrls[i].first << " -> " << topUrls[i].second << "\n";
	}

	return 0;
}