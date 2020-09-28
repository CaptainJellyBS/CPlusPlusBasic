#pragma once
#include "TimeTable.h"
#include "Student.h"
#include "Teacher.h"
#include "Classroom.h"
#include "Course.h"
#include <list>

/// <summary>
/// The class a visual interface would interact with to request timetables for specific students, teachers, and classrooms,
/// and to modify the existing students, teachers, classrooms, and courses; for example adding new students, or adding lessons to courses.
/// </summary>
class TimeTableManager
{
	public:
		TimeTable getTimetable(Student student);
		TimeTable getTimetable(Teacher teacher);
		TimeTable getTimetable(Classroom classroom);

		std::list<Student> students;
		std::list<Teacher> teachers;
		std::list<Classroom> classrooms;
		std::list<Course> courses;
};

