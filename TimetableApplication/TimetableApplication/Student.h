#pragma once
#include <string>
#include "Course.h"
#include <list>
class Student
{
	public:
		int id;
		std::string name;
		std::string email;
		std::list<Course> courses;

		Student(int _id, std::string _name, std::string _email);

		void addCourse(Course course);

		void removeCourse(Course course);
};

