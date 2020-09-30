#pragma once
#include "Person.h"

class Teacher : Person
{
	private:
		float monthlyWage;
	public:
		Teacher(int _age, std::string _name, float _monthlyWage);
		float getMonthlyWage();
		float getYearlyWage();

};

