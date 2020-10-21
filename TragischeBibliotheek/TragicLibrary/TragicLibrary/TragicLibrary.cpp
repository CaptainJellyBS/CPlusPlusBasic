// TragicLibrary.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Library.h"
#include "Book.h";

int main()
{
    Library* library = new Library();
    library->printBookStatus();
    
    library->borrowBook();
    library->printBookStatus();
    
    library->returnBook();
    library->printBookStatus();
}