#include <iostream>
#include "Bureaucrat.hpp"

int main(void)
{
	// PROMOTE
	try
	{
		Bureaucrat a(10, "Smit");
		while (42)
		{
			a.IncrementGrade();
			std::cout << a << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	// DEMOTE
	try
	{
		Bureaucrat a( 130, "Smit");
		while (42)
		{
			a.DecrementGrade();
			std::cout << a << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	// CONSTRUCTOR
	try
	{
		Bureaucrat a(-10, "Smit");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Bureaucrat a(1000 ,"Smit");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}