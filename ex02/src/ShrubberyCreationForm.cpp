#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
AForm("Shrubbery Creation Form", 145, 137, target)
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) :
AForm("Shrubbery Creation Form", 145, 137, other.getTarget())
{}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{}

void ShrubberyCreationForm::executeForm(void) const
{
	std::ofstream of;
}


