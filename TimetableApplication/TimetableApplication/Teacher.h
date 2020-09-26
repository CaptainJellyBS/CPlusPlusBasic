#pragma once
#include <string>
#include <list>
#include "Course.h"

class Teacher
{
	public:
		int id;
		std::string name;
		std::string email;
		std::list<Course> courses;

		Teacher(int _id, std::string _name, std::string _email);

		void addCourse(Course course);

		void removeCourse(Course course);
};

