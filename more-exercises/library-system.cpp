#include <iostream>
#include <vector>
#include <map>
#include <fstream>
#include <algorithm>

using namespace std;

class Book {
	public:
		string title;
		string author;
		string isbn;
		int year;
		bool isBorrowed = false;

		Book(string t, string a, string i, int y) : title(t), author(a), isbn(i), year(y) {}
};

class Library {
private:
    vector<Book> books;

public:
   
};

int main()
{

	return 0;
}