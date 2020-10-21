#pragma once
#include "Book.h"

class Library
{
public:
	~Library();
	Library();
	Library(const Library& l);
	Library& operator=(const Library& l);
	bool borrowBook();
	bool returnBook();
	void printBookStatus();
	Book* book;
};

