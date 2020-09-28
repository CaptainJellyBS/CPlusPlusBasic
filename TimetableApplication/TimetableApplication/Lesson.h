#pragma once
#include <ctime>
class Lesson
{
	std::tm timeStart;
	std::tm timeEnd;
	
	/*Note: Lesson should also have a classroom and a teacher assigned to it.
	However, when I tried implementing this,
	I got in trouble with circular dependencies that I didn't know how to fix.
	*/
};

