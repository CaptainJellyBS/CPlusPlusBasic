#pragma once
#include "Teacher.h"
#include "Student.h"
#include "Classroom.h"
#include "Lesson.h"
#include <map>
#include <list>

class TimeTable
{
public:
    TimeTable(Teacher teacher);
    TimeTable(Student student);
    TimeTable(Classroom classroom);

    //Dictionary holding all lessons, with an int representing the day as key, and a list of lessons for each day.
    std::map<int, std::list<Lesson>> lessons;

private:
    void addCourseLessonsToDictionary(Course course);
};

