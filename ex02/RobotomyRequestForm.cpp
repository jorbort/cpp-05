#include "RobotomyRequestForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("robotomy", 72,45), target(target)
{
	std::srand(std::time(NULL));
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src ) : AForm(src), target(src.target)
{

}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RobotomyRequestForm &				RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{
	this->target = rhs.target;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, RobotomyRequestForm const & i )
{
	o << "Form  " << i.getName() << " sign grade " << i.getSignGrade() << " execution grade is" << i.getExecGrade() << " targets " << i.getTarget();
	o << " the form " << (i.getSignature() ? "is signed" : "is not signed") << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void RobotomyRequestForm::_execute(const Bureaucrat & burocrata) const
{
	(void)burocrata;

	std::cout << "Drill Noise...." << "Robotomy for " << this->getTarget() << "was a " << (std::rand() % 2 ? "success" : "failure") << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

	std::string RobotomyRequestForm::getTarget() const
	{
		return (this->target);
	}

/* ************************************************************************** */