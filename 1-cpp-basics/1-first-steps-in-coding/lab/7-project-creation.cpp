#include <iostream>
using namespace std;

int main() {
	int timeForOneProject = 3, timeForAllProjects;
	
	string architectName;
	cin >> architectName;
	
	int projectsCount;
	cin >> projectsCount;
	
	timeForAllProjects = projectsCount * timeForOneProject;
	
	cout << "The architect " << architectName <<  " will need " 
		<< timeForAllProjects << " hours to complete " << projectsCount << " project/s." << endl;
		
	return 0;
}
