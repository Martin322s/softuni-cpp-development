#include <iostream>
#include <string>
using namespace std;

class Student
{
	string firstName;
	string lastName;
	double grade;

public:
	Student(string f, string l, double g)
	{
		firstName = f;
		lastName = l;
		grade = g;
	}
	string getFullName() const
	{
		return firstName + " " + lastName;
	}
	void setGrade(double g)
	{
		grade = g;
	}
	double getGrade() const
	{
		return grade;
	}
};

int main()
{
	Student s("Maria", "Ivanova", 5.5);
	cout << s.getFullName() << " - " << s.getGrade() << endl;
	s.setGrade(6.0);
	cout << s.getFullName() << " - " << s.getGrade() << endl;
}
