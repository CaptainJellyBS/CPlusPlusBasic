#include "TimeTable.h"
#include "Student.h"
#include "Teacher.h"
#include "Course.h"
#include "Lesson.h"

/// <summary>
/// Returns a timetable holding all the lessons planned for a teacher
/// </summary>
/// <param name="teacher"></param>
TimeTable::TimeTable(Teacher teacher)
{
	for (size_t i = 0; i < teacher.courses.size(); i++)
	{
		//Had trouble with getting item i from list, so put it in a comment
		//addCourseLessonsToDictionary(teacher.courses[i]);
	}
}


/// <summary>
/// Returns a timetable holding all the lessons planned for a student
/// </summary>
/// <param name="student"></param>
TimeTable::TimeTable(Student student)
{
	for (size_t i = 0; i < student.courses.size(); i++)
	{
		//Had trouble with getting item i from list, so put it in a comment
		//addCourseLessonsToDictionary(student.courses[i]);
	}
}


/// <summary>
/// Returns a timetable holding all the lessons planned for a classroom
/// </summary>
/// <param name="classroom"></param>
TimeTable::TimeTable(Classroom classroom)
{
	for (size_t i = 0; i < classroom.courses.size(); i++)
	{
		//Had trouble with getting item i from list, so put it in a comment
		//addCourseLessonsToDictionary(classroom.courses[i]);
	}
}

/// <summary>
/// Adds all lessons from a course to the lessons dictionary
/// </summary>
/// <param name="course"></param>
void TimeTable::addCourseLessonsToDictionary(Course course)
{
	//Pseudocode implementation
	/*
	foreach(Lesson l in course)
	{
		int day = l.timeStart.day;
		lessons[day].push_back(l);
	}
	
	*/
}

