#pragma once
#include <string>
#include "Lesson.h"
#include <list>

class Course
{
	public:	
		int id;
		std::string name;
		std::list<Lesson> lessons;

		bool operator == (const Course& o) const { return id == o.id; }
		bool operator != (const Course& o) const { !operator==(o); }

		Course();
	
	
};

