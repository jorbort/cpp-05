#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const std::string name;
		bool isSigned;
		const int signGrade;
		const int execGrade;

	protected:
		AForm();
		virtual void _execute(const Bureaucrat &executor) const = 0;
	public:

		AForm();
		AForm(std::string name, int signGrade, int execGrade);
		AForm( AForm const & src );
		virtual ~AForm();

		AForm &operator=( AForm const & rhs );

		class GradeTooLowException : public std::exception
		{
			const char*what() const throw();
		};
		class GradeTooHighException : public std::exception
		{
			const char*what() const throw();
		};
		class NotSignedExcception : public std::exception
		{
			const char *what() const throw();
		};

		void execute(const Bureaucrat &executor) const;

		const std::string getName() const;
		bool getSignature() const;
		int getSignGrade() const;
		int getExecGrade() const;

		void beSigned(Bureaucrat &bu);
	
};

std::ostream &			operator<<( std::ostream & o, AForm const & i );

#endif /* ************************************************************ FORM_H */