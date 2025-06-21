#include <iostream>
#include <sstream>
#include <vector>
#include <map>
#include <iomanip>

using namespace std;

int main() {
	map<string, vector<double>> students;
	
	unsigned studentsNum;
	cin >> studentsNum;
	
	for (unsigned x = 0; x < studentsNum; x++) {
		string name;
		double grade;
		
		cin >> name >> grade;
		
		students[name].push_back(grade);
	}
	
	cout << fixed << setprecision(2);
	
	for(map<string, vector<double>>::iterator it = students.begin(); it != students.end(); it++) {
		cout << it->first << " -> ";
		
		vector<double>& grades = it->second;
		double average = 0;
		
		for (double currGrade : grades) {
			average += currGrade;
			cout << currGrade << " ";
		}
		
		cout << "(avg: " << (average / grades.size()) << ')' << endl; 
	}
	
	return 0;
}

