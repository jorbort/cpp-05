#include "GradeTooHighException.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

GradeTooHighException::GradeTooHighException()
{
}

GradeTooHighException::GradeTooHighException( const GradeTooHighException & src )
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

GradeTooHighException::~GradeTooHighException()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

GradeTooHighException &				GradeTooHighException::operator=( GradeTooHighException const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, GradeTooHighException const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */