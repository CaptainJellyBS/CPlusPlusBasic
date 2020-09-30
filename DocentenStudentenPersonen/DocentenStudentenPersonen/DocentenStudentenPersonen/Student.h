#pragma once
#include "Person.h"

class Student : Person
{
	private:
		float ecs;

	public:
		float getECS();
		Student(int _age, std::string _name, float _ecs);
};

