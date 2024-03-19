#include "AForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AForm::AForm(): name("default"), signGrade(150) , execGrade(150)
{
	this->isSigned = false;
}

AForm::AForm(std::string newName, int signG, int execG) : name(newName), isSigned(false), signGrade(signG), execGrade(execG) 
{
	if (signGrade > 150 || execGrade > 150)
		throw GradeTooLowException();
	else if (signGrade < 1 || execGrade < 1)
		throw GradeTooHighException();
}

AForm::AForm( const AForm & src ) : name(src.name) , signGrade(src.signGrade), execGrade(src.execGrade)
{
	this->isSigned = src.isSigned;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AForm::~AForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AForm &				AForm::operator=( AForm const & rhs )
{
	if ( this != &rhs )
	{
		*this = rhs;
	}
	return (*this);
}

std::ostream &			operator<<( std::ostream & o, AForm const & i )
{
	o << i.getName() << (i.getSignature() ? " is signed already " : " has not been signed yet " ) << ", sign grade must be of at least " << i.getSignGrade() << ", and exec grade must be of at least " << i.getExecGrade() << std::endl ;
	return o;
}


//exceptions

const char *AForm::GradeTooHighException::what() const throw() 
{
	return ("Error: grade too high");
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return ("Error: grade too low");
}

const char *AForm::NotSignedExcception::what() const throw()
{
	return ("Error: form is not signed");
}
/*
** --------------------------------- METHODS ----------------------------------
*/

void AForm::beSigned(Bureaucrat &bu)
{
	if (bu.getGrade() > this->getSignGrade())
		throw GradeTooLowException();
	else
		this->isSigned = true;
}
void AForm::execute(const Bureaucrat &executor) const
{
	if (this->getSignature() == false)
		throw NotSignedExcception();
	if (executor.getGrade() > this->getSignGrade())
		throw GradeTooLowException();
	this->_execute(executor);
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/

const std::string AForm::getName() const
{
	return (this->name);
}

bool AForm::getSignature() const
{
	return (this->isSigned);
}

int AForm::getSignGrade() const
{
	return (this->signGrade);
}

int AForm::getExecGrade() const
{
	return (this->execGrade);
}
/* ************************************************************************** */