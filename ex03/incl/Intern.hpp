#pragma once
#include <string>
#include <iostream>
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
public:
	Intern(void) = default;
	Intern(const Intern &other) = default;
	Intern &operator=(const Intern &other) = default;
	~Intern(void) = default;

	AForm *makeForm(std::string name, std::string target) const;
};
