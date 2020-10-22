#pragma once
#include "ColouredObject.h"
#include "Socks.h"

class Suitcase : ColouredObject
{
public:
	Suitcase(std::string n);
	Suitcase(const Suitcase& c);
	~Suitcase();
	Socks* socks;
};

