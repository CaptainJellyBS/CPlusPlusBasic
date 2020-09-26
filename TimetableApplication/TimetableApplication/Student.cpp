#include "Student.h"


Student::Student(int _id, std::string _name, std::string _email)
{
	id = _id; name = _name; email = _email;
}


/// <summary>
/// Adds a course to the courses list
/// </summary>
/// <param name="course"></param>
void Student::addCourse(Course course)
{
	courses.push_back(course);
}

/// <summary>
/// Removes a course from the courses list
/// </summary>
/// <param name="course"></param>
void Student::removeCourse(Course course)
{
	courses.remove(course);
}
