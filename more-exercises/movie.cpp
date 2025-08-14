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

	string getInfo() const
	{
		return title + " (" + to_string(year) + "), rating: " + to_string(rating);
	}

	void setRating(double r)
	{
		rating = r;
	}

	double getRating() const
	{
		return rating;
	}
};

int main()
{
	Movie m("Inception", 2010, 8.8);
	cout << m.getInfo() << endl;
	m.setRating(9.0);
	cout << m.getInfo() << endl;
}