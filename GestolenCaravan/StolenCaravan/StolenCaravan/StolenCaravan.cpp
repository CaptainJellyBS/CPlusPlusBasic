// StolenCaravan.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Caravan.h";
#include "Socks.h";
#include "Suitcase.h";
#include "ColouredObject.h"

int main()
{
    Caravan* caravan = new Caravan();
    Socks* socks = new Socks();
    Suitcase* suitcase = new Suitcase();

    caravan->setColour("blue");
    suitcase->setColour("red");
    socks->setColour("green");

    suitcase->AddSocks(socks);
    caravan->addSuitcase(suitcase);

    std::cout << caravan->parse() << std::endl;

    //bogus assignment that is immediately overwritten but causes errors if non-existent
    Caravan* stolenCaravan = new Caravan();

    *stolenCaravan = *caravan;
    stolenCaravan->setName("stolen caravan");

    std::cout << stolenCaravan->parse() << std::endl;
    std::cout << caravan->parse() << std::endl;

}
