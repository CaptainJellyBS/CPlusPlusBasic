#include "Book.h"

Book::Book(std::string title)
{
	borrowed = false;
	name = title;
}

Book::Book(Book& book)
{
	borrowed = book.borrowed;
	name = book.name;
}

void Book::printStatus()
{
	if (borrowed)
	{
		std::cout << name + " is currently unavailable" << std::endl;
		return;
	}
	std::cout << name + " is currently available" << std::endl;

}
