#pragma once
#include <string>
#include "course.h"
#include <list>

class Classroom
{
	public:
		int id;
		std::string name;
		std::list<Course> courses;
};

