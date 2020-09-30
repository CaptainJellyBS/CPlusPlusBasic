#include "Person.h"

Person::Person(int _age, std::string _name)
{
	age = _age;
	name = _name;
}

int Person::getAge()
{
	return age;
}

std::string Person::getName()
{
	return name;
}
