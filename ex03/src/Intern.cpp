#include "Intern.hpp"

AForm *Intern::makeForm(std::string name, std::string target) const
{
	if (name == "shrubbery creation")
	{
		std::cout << "Intern creates " << name << " form.\n";
		return (new ShrubberyCreationForm(target));
	}
	else if (name == "robotomy request")
	{
		std::cout << "Intern creates " << name << " form.\n";
		return (new RobotomyRequestForm(target));
	}
	else if (name == "presidential pardon")
	{
		std::cout << "Intern creates " << name << " form.\n";
		return (new PresidentialPardonForm(target));
	}
	else
	{
		std::cout << name << " form not found.\n";
		return (nullptr);
	}
}
