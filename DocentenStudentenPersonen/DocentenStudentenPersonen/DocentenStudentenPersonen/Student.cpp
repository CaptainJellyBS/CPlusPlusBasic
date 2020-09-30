#include "Student.h"


Student::Student(int _age, std::string _name, float _ecs) : Person(_age, _name)
{
	ecs = _ecs;
}

float Student::getECS()
{
	return ecs;
}

