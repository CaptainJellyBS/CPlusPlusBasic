#pragma once
#include <string>
class ColouredObject
{
public:
	void setName(std::string n);
	void setColour(std::string c);
	
	std::string getName();

private:
	std::string name;
	std::string colour;
};

