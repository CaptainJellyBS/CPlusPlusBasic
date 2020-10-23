#include "Caravan.h"

Caravan::Caravan()
{
	setName("caravan");
}

Caravan::Caravan(const Caravan& c)
{
	colour = c.colour;
	name = c.name;
	suitcase = c.suitcase;
}

Caravan::~Caravan()
{
	delete suitcase;
}

Caravan& Caravan::operator=(const Caravan& c)
{
	if (&c == this) { return *this; }
	delete suitcase;

	colour = c.colour;
	name = c.name;
	suitcase = c.suitcase;

	return *this;
}

void Caravan::addSuitcase(Suitcase* s)
{
	suitcase = s;
}

std::string Caravan::parse()
{
	if (!suitcase)
	{
		return getName();
	}
	return getName() + " holding " + suitcase->parse();
}


