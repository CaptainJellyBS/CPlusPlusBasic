#pragma once
#include "Coin100.h"
#include "Coin50.h"
#include "CoinCoffee.h"
#include <string>

class CoffeeDispenser
{
	public:
		CoffeeDispenser();
		void insertCoin(Coin100 coin);
		void insertCoin(Coin50 coin);
		void insertCoin(CoinCoffee coin);
	
	private:
		std::string coffee1, coffee2, coffee3;
		int coffee1Price, coffee2Price, coffee3Price;
		void printCoffee(std::string name, int price);
};

