#include "Suitcase.h"

Suitcase::Suitcase() : ColouredObject()
{
	setName("suitcase");
}

Suitcase::Suitcase(const Suitcase& c)
{
	colour = c.colour;
	name = c.name;
	socks = c.socks;
}

Suitcase::~Suitcase()
{
	delete socks;
}

Suitcase& Suitcase::operator=(const Suitcase& c)
{
	if (&c == this) { return *this; }
	delete socks;

	colour = c.colour;
	name = c.name;
	socks = c.socks;
	return *this;
}

void Suitcase::AddSocks(Socks* s)
{
	socks = s;
}

std::string Suitcase::parse()
{
	if (!socks)
	{
		return getName();
	}
	return getName() + " holding " + socks->parse();
}