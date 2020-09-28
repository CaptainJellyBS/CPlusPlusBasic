#include "TimeTableManager.h"

TimeTable TimeTableManager::getTimetable(Student student)
{
	return TimeTable(student);
}

TimeTable TimeTableManager::getTimetable(Teacher teacher)
{
	return TimeTable(teacher);
}

TimeTable TimeTableManager::getTimetable(Classroom classroom)
{
	return TimeTable(classroom);
}
