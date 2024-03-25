#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"
#include "Intern.hpp"

int main(void)
{
	Intern rick;
	AForm *rrf;
	try
	{
		rrf = rick.makeForm("Robotomy Request", "Bender");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	Intern homero;
	AForm *ppf;
	try
	{
		ppf = homero.makeForm("Presidential Pardon", "burns");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	Intern bart;
	AForm *scf;
	try
	{
		scf = bart.makeForm("Shruberry Creation", "home");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	Intern rafa;
	AForm *invalidForm;
	try
	{
		invalidForm = rafa.makeForm("invalid form", "home");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	delete ppf;
	delete scf;
	delete rrf;
}