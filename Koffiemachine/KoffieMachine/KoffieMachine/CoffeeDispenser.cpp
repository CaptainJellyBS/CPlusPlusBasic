#include "CoffeeDispenser.h"
#include <iostream>

CoffeeDispenser::CoffeeDispenser()
{
	coffee1 = "Vieze Spar koffie";
	coffee2 = "Acceptabele Jumbo koffie";
	coffee3 = "Superdeluxe koffie ofzo"; //ik ken geen fancy koffiesoorten ik ben een arme student

	coffee1Price = 50;
	coffee2Price = 100;
	coffee3Price = 250;
}

void CoffeeDispenser::insertCoin(Coin50 coin)
{
	std::cout << "50 cents coin inserted" << std::endl;

	printCoffee(coffee1, coffee1Price);
}

void CoffeeDispenser::insertCoin(Coin100 coin)
{
	std::cout << "1 euro coin inserted" << std::endl;

	printCoffee(coffee1, coffee1Price);
	printCoffee(coffee2, coffee2Price);
}

void CoffeeDispenser::insertCoin(CoinCoffee coin)
{
	std::cout << "Coffee coin inserted" << std::endl;
	printCoffee(coffee1, coffee1Price);
	printCoffee(coffee2, coffee2Price);
	printCoffee(coffee3, coffee3Price);
}

void CoffeeDispenser::printCoffee(std::string name, int price)
{
	std::cout << name << " " << (float)price / 100 << std::endl;
}
