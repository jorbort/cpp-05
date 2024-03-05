#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <string>
#include "AForm.hpp"

class AForm;

class PresidentialPardonForm : public AForm
{
	private:
	std::string target;
	PresidentialPardonForm(void);

	protected:
	virtual void _execute(Bureaucrat const & executor) const;

	public:

		PresidentialPardonForm(std::string target);
		PresidentialPardonForm( PresidentialPardonForm const & src );
		~PresidentialPardonForm();	
		PresidentialPardonForm &		operator=( PresidentialPardonForm const & rhs );

		std::string getTarget() const;
};

std::ostream &			operator<<( std::ostream & o, PresidentialPardonForm const & i );

#endif /* ****************************************** PRESIDENTIALPARDONFORM_H */