#include "Suitcase.h"

Suitcase::Suitcase(std::string n) : ColouredObject(n)
{
}

Suitcase::Suitcase(const Suitcase& c)
{
	socks = c.socks;
}

Suitcase::~Suitcase()
{
	delete socks;
}
