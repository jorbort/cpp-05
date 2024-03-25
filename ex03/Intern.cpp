#include "Intern.hpp"


/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern()
{
}

Intern::Intern( const Intern & src )
{
	(void) src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Intern &Intern::operator=( Intern const & rhs )
{
	(void)rhs;
	return *this;
}

std::ostream &operator<<( std::ostream & o, Intern const & i )
{
	(void) i;
	o << "intern" << std::endl ;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

AForm *Intern::makeForm(std::string name, std::string target)
{
	std::string formLists[3] = {"Robotomy Request", "Shruberry Creation" , "Presidential Pardon"} ;
	int i;

	for (i = 0; i < 3; i++)
	{
		if (formLists[i] == name)
		{
			break;
		}
	}

	switch (i)
	{
		case 0:
		{
			std::cout << "Intern creates " << name << " Form" << std::endl;	
			return (new RobotomyRequestForm(target));
		}
		case 1:
		{
			std::cout << "Intern creates " << name << " Form" << std::endl;
			return (new ShrubberyCreationForm(target));
		}
		case 2:
		{
			std::cout << "Intern creates " << name << " Form" << std::endl;
			return (new PresidentialPardonForm(target));
		}
		default:
			throw wrongFormNameException();
	}
}

const char *Intern::wrongFormNameException::what() const throw()
{
	return ("Error: cannot create a form that does not exist");
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */