#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form(): name("default"), signGrade(150) , execGrade(150)
{
	this->isSigned = false;
}

Form::Form(std::string newName, int signG, int execG) : name(newName), isSigned(false), signGrade(signG), execGrade(execG) 
{
	if (signGrade > 150 || execGrade > 150)
		throw GradeTooLowException();
	else if (signGrade < 1 || execGrade < 1)
		throw GradeTooHighException();
}

Form::Form( const Form & src ) : name(src.name) , signGrade(src.signGrade), execGrade(src.execGrade)
{
	this->isSigned = src.isSigned;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form &				Form::operator=( Form const & rhs )
{
	if ( this != &rhs )
	{
		*this = rhs;
	}
	return (*this);
}

std::ostream &			operator<<( std::ostream & o, Form const & i )
{
	o << i.getName() << "is signed = " << i.getSignature() << ", sign grade must be of at least " << i.getSignGrade() << ", and exec grade must be of at least " << i.getExecGrade() << std::endl ;
	return o;
}


//exceptions

const char *Form::GradeTooHighException::what() const throw() 
{
	return ("Error: grade too high");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Error: grade too low");
}
/*
** --------------------------------- METHODS ----------------------------------
*/

void Form::beSigned(Bureaucrat &bu)
{
	if (bu.getGrade() > this->getSignGrade())
		throw GradeTooLowException();
	else
		this->isSigned = true;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

const std::string Form::getName() const
{
	return (this->name);
}

bool Form::getSignature() const
{
	return (this->isSigned);
}

const int Form::getSignGrade() const
{
	return (this->signGrade);
}

const int Form::getExecGrade() const
{
	return (this->execGrade);
}
/* ************************************************************************** */