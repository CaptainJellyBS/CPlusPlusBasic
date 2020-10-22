#pragma once
#include <string>
class ColouredObject
{
public:
	ColouredObject();
	void setName(std::string n);
	void setColour(std::string c);
	
	std::string getName();

protected:
	std::string name;
	std::string colour;
};

