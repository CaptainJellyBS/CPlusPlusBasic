#include "ColouredObject.h"

//I wanted to do fancy getters and setters so the name is always colour + name.
//But then C++ decided to not have those in a simple way so I just made functions myself

void ColouredObject::setName(std::string n)
{
	name = n;
}

void ColouredObject::setColour(std::string c)
{
	colour = c;
}

std::string ColouredObject::getName()
{
	return colour + " " + name;
}
