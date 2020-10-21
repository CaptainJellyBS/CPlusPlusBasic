#pragma once
#include <string>
#include <iostream>

class Book
{
public:
	Book(std::string title);
	Book(Book& book);
	bool borrowed;
	std::string name;
	void printStatus();
};

