// ReadAndWrite.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
int main()
{
	std::ifstream inStream;
	inStream.open("E:/Documents/HKU/2021(Year2)/CPlusPlusBasic/LezenEnSchrijven/ReadAndWrite/ReadAndWrite/test.txt");
	if (!inStream)
	{
		std::cout << "well that didn't work" << std::endl;
		exit(1);
	}	
}

