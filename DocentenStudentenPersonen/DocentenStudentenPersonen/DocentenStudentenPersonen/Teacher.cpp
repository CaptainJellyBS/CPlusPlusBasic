#include "Teacher.h"

Teacher::Teacher(int _age, std::string _name, float _monthlyWage) : Person(_age, _name)
{
	monthlyWage = _monthlyWage;
}

float Teacher::getMonthlyWage()
{
	return monthlyWage;
}

float Teacher::getYearlyWage()
{
	return monthlyWage * 12;
}
