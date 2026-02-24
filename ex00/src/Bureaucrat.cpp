/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpollan <anpollan@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 14:44:47 by anpollan          #+#    #+#             */
/*   Updated: 2026/02/23 17:12:37 by anpollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <string>

Bureaucrat::Bureaucrat(void) : _name("Bureaucrat"), _grade(_gradeMin)
{}

Bureaucrat::Bureaucrat(const std::string name, const unsigned int grade) :
_name(name), _grade(grade)
{}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : _name(other._name), _grade(other._grade)
{}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	if (this == &other)
		return (*this);
	_grade = other._grade;
	return (*this);
}
unsigned int Bureaucrat::getGrade(void) const
{
	return (_grade);
}

std::string Bureaucrat::getName(void) const
{
	return (_name);
}

void Bureaucrat::incrementGrade(void)
{
	--_grade;
	if (_grade < _gradeMax)
	{
		++_grade;
		std::string message = _name + " already at max grade " + std::to_string(_gradeMax);
		throw GradeTooHighException(message);
	}
}

void Bureaucrat::decrementGrade(void)
{
	++_grade;
	if (_grade > _gradeMin)
	{
		--_grade;
		std::string message = _name + " already at min grade " + std::to_string(_gradeMin);
		throw GradeTooLowException(message);
	}
}

Bureaucrat::GradeTooLowException::GradeTooLowException(std::string message) : _message(message)
{}

const char *Bureaucrat::GradeTooLowException::what() const noexcept
{
	return (_message.c_str());
}

Bureaucrat::GradeTooHighException::GradeTooHighException(const std::string message) : _message(message)
{}

const char *Bureaucrat::GradeTooHighException::what() const noexcept
{
	return (_message.c_str());
}
