#pragma once
#include "Teacher.h"
#include "Student.h"
#include "Classroom.h"

class TimeTable
{
public:
    TimeTable(Teacher teacher);
    TimeTable(Student student);
    TimeTable(Classroom classroom);
};

