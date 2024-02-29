#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string name;
		bool isSigned;
		const int signGrade;
		const int execGrade;


	public:

		Form();
		Form(std::string name, int signGrade, int execGrade);
		Form( Form const & src );
		~Form();

		Form &operator=( Form const & rhs );

		class GradeTooLowException : public std::exception
		{
			const char*what() const throw();
		};
		
		class GradeTooHighException : public std::exception
		{
			const char*what() const throw();
		};

		const std::string getName() const;
		bool getSignature() const;
		int getSignGrade() const;
		int getExecGrade() const;

		void beSigned(Bureaucrat &bu);
	
};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ************************************************************ FORM_H */