// SimonSays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <chrono>
#include <thread>
using namespace std::this_thread;
using namespace std::chrono; // nanoseconds, system_clock, seconds

void simonSays(int i);
int appendRandom(int i);
int startAmount = 3;

int main()
{
	srand((unsigned int)time(NULL));

	while (true)
	{
		int i = rand() % 10;

		for (size_t j = 0; j < startAmount-1; j++)
		{
			i = appendRandom(i);
		}
		simonSays(i);
	}
}

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

int appendRandom(int i)
{
	i *= 10;
	i += rand() % 10;
	return i;
}

