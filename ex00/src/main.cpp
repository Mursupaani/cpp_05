/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpollan <anpollan@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 14:56:41 by anpollan          #+#    #+#             */
/*   Updated: 2026/02/23 17:12:21 by anpollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	{
		Bureaucrat test;
		std::cout << "Bureucrat: " << test.getName() << "\n";
		std::cout << "Grade: " << test.getGrade() << "\n\n";
		try
		{
			test.decrementGrade();
		}
		catch (Bureaucrat::GradeTooLowException &e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << "Bureucrat: " << test.getName() << "\n";
		std::cout << "Grade: " << test.getGrade() << "\n\n";
		std::cout << "Increment bureucrat's grade\n";
		test.incrementGrade();
		std::cout << "Bureucrat: " << test.getName() << "\n";
		std::cout << "Grade: " << test.getGrade() << "\n\n";
	}
	{
		Bureaucrat test("Pekka", 1);
		std::cout << "Bureucrat: " << test.getName() << "\n";
		std::cout << "Grade: " << test.getGrade() << "\n\n";
		try
		{
			test.incrementGrade();
		}
		catch (Bureaucrat::GradeTooHighException &e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << "Bureucrat: " << test.getName() << "\n";
		std::cout << "Grade: " << test.getGrade() << "\n\n";
		std::cout << "Decrement bureucrat's grade\n";
		test.decrementGrade();
		std::cout << "Bureucrat: " << test.getName() << "\n";
		std::cout << "Grade: " << test.getGrade() << "\n\n";
	}
	{
		Bureaucrat test("Pekka", 1);
		Bureaucrat test_copy(test);
		test.decrementGrade();
		std::cout << "Bureucrat: " << test.getName() << "\n";
		std::cout << "Grade: " << test.getGrade() << "\n\n";
		std::cout << "Copy of original\n";
		std::cout << "Bureucrat: " << test_copy.getName() << "\n";
		std::cout << "Grade: " << test_copy.getGrade() << "\n\n";
		std::cout << "Copy assignment test_copy = test\n";
		test_copy = test;
		std::cout << "Bureucrat: " << test_copy.getName() << "\n";
		std::cout << "Grade: " << test_copy.getGrade() << "\n\n";
	}
	{
		try
		{
			Bureaucrat test("Pekka", 0);
			std::cout << "Bureucrat: " << test.getName() << "\n";
			std::cout << "Grade: " << test.getGrade() << "\n\n";
		}
		catch (Bureaucrat::GradeTooLowException &e)
		{
			std::cout << e.what() << "\n";
		}
		catch (Bureaucrat::GradeTooHighException &e)
		{
			std::cout << e.what() << "\n";
		}
	}
	{
		try
		{
			Bureaucrat test("Pekka", -1);
			std::cout << "Bureucrat: " << test.getName() << "\n";
			std::cout << "Grade: " << test.getGrade() << "\n\n";
		}
		catch (Bureaucrat::GradeTooLowException &e)
		{
			std::cout << e.what() << "\n";
		}
		catch (Bureaucrat::GradeTooHighException &e)
		{
			std::cout << e.what() << "\n";
		}
	}
	{
		try
		{
			Bureaucrat test("Pekka", 200);
			std::cout << "Bureucrat: " << test.getName() << "\n";
			std::cout << "Grade: " << test.getGrade() << "\n\n";
		}
		catch (Bureaucrat::GradeTooLowException &e)
		{
			std::cout << e.what() << "\n";
		}
		catch (Bureaucrat::GradeTooHighException &e)
		{
			std::cout << e.what() << "\n";
		}
	}
}
