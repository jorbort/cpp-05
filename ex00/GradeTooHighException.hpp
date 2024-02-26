#ifndef GRADETOOHIGHEXCEPTION_HPP
# define GRADETOOHIGHEXCEPTION_HPP

# include <iostream>
# include <string>

class GradeTooHighException : std::exception
{

	public:

		GradeTooHighException();
		GradeTooHighException( GradeTooHighException const & src );
		//virtual ~GradeTooHighException();

		GradeTooHighException &		operator=( GradeTooHighException const & rhs );
		virtual const char* what() const;
	private:

};

std::ostream &			operator<<( std::ostream & o, GradeTooHighException const & i );

#endif /* ******************************************* GRADETOOHIGHEXCEPTION_H */