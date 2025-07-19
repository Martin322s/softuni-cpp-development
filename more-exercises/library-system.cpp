#include <iostream>
#include <vector>
#include <map>
#include <fstream>
#include <algorithm>

using namespace std;

class Book
{
public:
	string title;
	string author;
	string isbn;
	int year;
	bool isBorrowed = false;

	Book(string t, string a, string i, int y) : title(t), author(a), isbn(i), year(y) {}
};

class Library
{
private:
	vector<Book> books;

public:
	void addBook(const Book &b)
	{
		books.push_back(b);
	}

	void listBooks()
	{
		for (auto &b : books)
		{
			cout << b.title << " by " << b.author
				 << " (" << b.year << ")"
				 << (b.isBorrowed ? " - Borrowed" : " - Available") << endl;
		}
	}

	void borrowBook(string isbn)
	{
		for (auto &b : books)
		{
			if (b.isbn == isbn && !b.isBorrowed)
			{
				b.isBorrowed = true;
				cout << "Book borrowed!\n";
				return;
			}
		}
		cout << "Book not available!\n";
	}
};

int main()
{

	Library lib;
	lib.addBook(Book("1984", "George Orwell", "123", 1949));
	lib.addBook(Book("Dune", "Frank Herbert", "456", 1965));

	lib.listBooks();
	lib.borrowBook("456");
	lib.listBooks();
	return 0;
}