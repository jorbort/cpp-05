#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat()
{
	this->name = "default";
	this->grade = 150;

}

Bureaucrat::Bureaucrat( const Bureaucrat & src )
{
	this->name = src.getName();
	this->grade = src.getGrade();
	*this = src;
}

Bureaucrat::Bureaucrat(int grade, std::string const name)
{
	this->name = name;
	if (grade > 150)
		throw GradeTooLowException();
	else if (grade < 1)
		throw GradeTooHighException();
	else
		this->grade = grade;	
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Bureaucrat &Bureaucrat::operator=( Bureaucrat const & rhs )
{
	this->name = rhs.getName();
	this->grade = rhs.getGrade();
	return *this;
}

std::ostream &			operator<<( std::ostream & o, const Bureaucrat  & i )
{
	o << i.getName() << ", beurocrat grade " << i.getGrade();
	return o;
}


//exceptions 

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Error: grade too high");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Error: grade too low");
}

/*
** --------------------------------- METHODS ----------------------------------
*/
	void Bureaucrat::IncrementGrade()
	{
		int newgrade = this->getGrade() - 1;
		if (this->getGrade() == 1)
			throw GradeTooHighException();
		else
			this->setGrade(newgrade);
	}

	void Bureaucrat::DecrementGrade()
	{
		int newgrade = this->getGrade() + 1;
		if (this->getGrade() == 150)
			throw GradeTooLowException();
		else
			this->setGrade(newgrade);
	}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

void Bureaucrat::setGrade(int grade)
{
	this->grade = grade;
}

std::string Bureaucrat::getName() const
{
	return (this->name);
}

int Bureaucrat::getGrade() const
{
	return (this->grade);
}

void Bureaucrat::setName(std::string newname)
{
	this->name = newname;
}

void Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->getName() << " signed " << form.getName() << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cerr << this->getName() << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
	}
}
/* ************************************************************************** */