#include "Library.h"

Library::~Library()
{
	delete book;
}

Library::Library() 
{
	book = new Book("Dune");
}

Library::Library(const Library& l)
{
	book = new Book(*l.book);
}

Library& Library::operator=(const Library& l)
{
	if (&l == this) { return *this; }
	book = new Book(*l.book);
	delete l.book;
}

/// <summary>
/// /// Return the library book. Returns false if the book is already borrowed
/// </summary>
/// <returns></returns>
bool Library::borrowBook()
{
	if (book->borrowed) { return false; }
	book->borrowed = true;
	return true;
}

/// <summary>
/// Return the library book. Returns false if the book wasn't borrowed at the time
/// </summary>
/// <returns></returns>
bool Library::returnBook()
{
	if (!book->borrowed) { return false; }
	book->borrowed = false;
	return true;
}

void Library::printBookStatus()
{
	book->printStatus();
}
