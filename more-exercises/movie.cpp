#include <iostream>
#include <string>
using namespace std;

class Movie
{
	string title;
	int year;
	double rating;

public:
	Movie(string t, int y, double r)
	{
		title = t;
		year = y;
		rating = r;
	}
};