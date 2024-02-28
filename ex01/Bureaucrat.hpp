#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
#include "Form.hpp"

class Bureaucrat
{
	private:
	std::string  name;
	int grade;
	public:

		//constructors
		Bureaucrat();
		Bureaucrat(int grade, std::string const name );
		Bureaucrat( Bureaucrat const & src );
		Bureaucrat &operator=( Bureaucrat const & rhs );

		//destructor
		~Bureaucrat();

		//exceptions
		class GradeTooHighException : public std::exception
		{
			public :
			const char * what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
			const char *what() const throw();
		};

		//accsessor methods
		void setName(std::string newname);
		void setGrade(int grade);
		std::string getName() const;
		int getGrade() const;
		void IncrementGrade();
		void DecrementGrade();
		void signForm(Form &form);

};

std::ostream &operator<<( std::ostream & o, Bureaucrat const & i );

#endif