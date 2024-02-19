#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

class Bureaucrat
{
	private:
	std::string  name;
	int grade;
	public:

		Bureaucrat();
		Bureaucrat(int grade, std::string const name );
		Bureaucrat( Bureaucrat const & src );
		~Bureaucrat();

		// Bureaucrat &		operator=( Bureaucrat const & rhs );
		std::string &getName();
		int getGrade();
		std::exception &GradeTooHighException();
		std::exception &GradeTooLowException();
		void IncrementGrade();
		void DecrementGrade();

};

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i );

#endif /* ****************************************************** BUREAUCRAT_H */