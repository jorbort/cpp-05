#ifndef GRADETOOLOWEXCEPTION_HPP
# define GRADETOOLOWEXCEPTION_HPP

# include <iostream>
# include <string>

class GradeTooLowException
{

	public:

		GradeTooLowException();
		GradeTooLowException( GradeTooLowException const & src );
		~GradeTooLowException();

		GradeTooLowException &		operator=( GradeTooLowException const & rhs );

	private:

};

std::ostream &			operator<<( std::ostream & o, GradeTooLowException const & i );

#endif /* ******************************************** GRADETOOLOWEXCEPTION_H */