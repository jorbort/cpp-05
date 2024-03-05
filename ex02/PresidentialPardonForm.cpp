#include "PresidentialPardonForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PresidentialPardonForm::PresidentialPardonForm(std::string target) :  AForm("Presidential pardon form", 25, 5) , target(target)
{

}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src ) : AForm(src), target(src.target)
{

}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PresidentialPardonForm::~PresidentialPardonForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PresidentialPardonForm &PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
{
	this->target = rhs.target;
	return *this;
}

std::ostream &operator<<( std::ostream & o, PresidentialPardonForm const & i )
{
	o << "Form  " << i.getName() << " sign grade " << i.getSignGrade() << " execution grade is" << i.getExecGrade() << " targets " << i.getTarget();
	o << " the form " << (i.getSignature() ? "is signed" : "is not signed") << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void PresidentialPardonForm::_execute(Bureaucrat const &executor) const
{
	(void)executor;
	std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string PresidentialPardonForm::getTarget() const 
{
	return (this->target);
}
/* ************************************************************************** */