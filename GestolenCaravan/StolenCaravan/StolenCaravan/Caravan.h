#pragma once
#include "ColouredObject.h"
#include "Suitcase.h"

class Caravan : public ColouredObject
{
public:
	Caravan();
	Caravan(const Caravan& c);
	~Caravan();
	Caravan& operator=(const Caravan& c);
	
	Suitcase* suitcase;

	void addSuitcase(Suitcase* s);

	std::string parse() override;

};

