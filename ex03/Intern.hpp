#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "AForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"

class AForm;

class Intern
{

	public:

		Intern();
		Intern( Intern const & src );
		~Intern();

		Intern &		operator=( Intern const & rhs );
		AForm *makeForm(std::string name, std::string target);

		class wrongFormNameException : public std::exception
		{
			const char *what() const throw();
		};

};

std::ostream &operator<<( std::ostream & o, Intern const & i );

#endif 