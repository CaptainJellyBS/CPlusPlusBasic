#include <iostream>
#include "CoffeeDispenser.h"

int main()
{
    CoffeeDispenser dispenser = CoffeeDispenser();
    
    while (true)
    {
        std::cout << std::endl << "Type 0 to insert a 50 cent coin, 1 to insert a 1 euro coin, or 2 to insert a coffee coin" << std::endl;
        int input;
        std::cin >> input;

        switch (input)
        {
        case 0: dispenser.insertCoin(Coin50()); break;
        case 1: dispenser.insertCoin(Coin100()); break;
        case 2: dispenser.insertCoin(CoinCoffee()); break;
        }
    }
    
}