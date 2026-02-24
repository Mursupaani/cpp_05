#pragma once
#include "AForm.hpp"
#include <string>
#include <iostream>

class ShrubberyCreationForm : public AForm
{
public:
	ShrubberyCreationForm(void) = delete;
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm &other);
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other) = delete;
	~ShrubberyCreationForm(void);

	void executeForm(void) const override;
};
