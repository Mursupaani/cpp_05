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
		std::cout << "TEST1:\n\n";
		Bureaucrat pekka("Pekka", 11);
		Form form("Test", 10, 15);
		std::cout << "Bureucrat: " << pekka.getName() << "\n";
		std::cout << "Grade: " << pekka.getGrade() << "\n";
		std::cout << form;
		pekka.signForm(form);
		pekka.incrementGrade();
		pekka.signForm(form);
		std::cout << form << "\n";
	}
	{
		std::cout << "TEST2:\n\n";
		Bureaucrat pekka("Pekka", 1);
		Form form("Test", 0, 15);
		std::cout << form;
		std::cout << "Bureucrat: " << pekka.getName() << "\n";
		std::cout << "Grade: " << pekka.getGrade() << "\n\n";
		pekka.signForm(form);
		std::cout << form << "\n";
	}
	{
		std::cout << "TEST3:\n\n";
		Bureaucrat pekka("Pekka", 200);
		Form form("Test", -1, 15);
		std::cout << form;
		std::cout << "Bureucrat: " << pekka.getName() << "\n";
		std::cout << "Grade: " << pekka.getGrade() << "\n\n";
		std::cout << form;
		pekka.signForm(form);
		std::cout << form;
	}
}
