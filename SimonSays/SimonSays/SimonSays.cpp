// SimonSays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <chrono>
#include <thread>
using namespace std::this_thread;
using namespace std::chrono;

void simonSays(int i);
int appendRandom(int i);
int startAmount = 3;

int main()
{
	srand((unsigned int)time(NULL));

	while (true)
	{
		int i = rand() % 10;

		//Create a number of the specified size
		for (size_t j = 0; j < startAmount-1; j++)
		{
			i = appendRandom(i);
		}
		simonSays(i);
	}
}

/// <summary>
/// Play out a game of simon says with integer i. Recurses if the player is correct, returns if the player loses.
/// </summary>
/// <param name="i"></param>
void simonSays(int i)
{
	system("CLS");

	std::cout << i << std::endl;
	sleep_for(milliseconds(1000));
	system("CLS");

	int r;
	std::cin >> r;
	
	if (i == r)
	{
		i = appendRandom(i);
		simonSays(i);
		return;
	}

	std::cout << "You lost" << std::endl;
	sleep_for(milliseconds(1000));
}

/// <summary>
/// Appends a random number between 0 and 9 to an int
/// </summary>
/// <param name="i"></param>
/// <returns></returns>
int appendRandom(int i)
{
	i *= 10;
	i += rand() % 10;
	return i;
}

