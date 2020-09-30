#pragma once
#include <string>

class Person
{
	private:
		int age;
		std::string name;

	public:
		Person(int _age, std::string _name);
		int getAge();
		std::string getName();
};

