#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <string>
#include "AForm.hpp"

class AForm;

class RobotomyRequestForm : public AForm
{
	private:
	std::string target;
	RobotomyRequestForm(void);
	
	protected:
	 virtual void _execute(Bureaucrat const &executor) const;
	
	public:

		RobotomyRequestForm(std::string target);
		RobotomyRequestForm( RobotomyRequestForm const & src );
		~RobotomyRequestForm();

		RobotomyRequestForm &operator=( RobotomyRequestForm const & rhs );

		std::string getTarget() const;

};

std::ostream &operator<<( std::ostream & o, RobotomyRequestForm const & i );

#endif /* ********************************************* ROBOTOMYREQUESTFORM_H */