#pragma once
#include "ColouredObject.h"
#include "Suitcase.h"

class Caravan : ColouredObject
{
public:
	Caravan();
	Caravan(const Caravan& c);
	~Caravan();
	Suitcase* suitcase;
};

