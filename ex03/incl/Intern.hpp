#pragma once
#include <string>
#include <iostream>

class Intern
{
private:

public:
	Intern(void);
	Intern(const Intern &other);
	Intern &operator=(const Intern &other);
	~Intern(void);
};
