#include "Caravan.h"

Caravan::Caravan()
{
}

Caravan::Caravan(const Caravan& c)
{
	suitcase = c.suitcase;
}

Caravan::~Caravan()
{
	delete suitcase;
}
