#pragma once
#include "ColouredObject.h"
#include "Socks.h"

class Suitcase : public ColouredObject
{
public:
	Suitcase();
	Suitcase(const Suitcase& c);
	~Suitcase();
	
	Suitcase& operator=(const Suitcase& c);
	Socks* socks;
	
	void AddSocks(Socks* s);

	std::string parse() override;
};

