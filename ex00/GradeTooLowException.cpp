#include "GradeTooLowException.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

GradeTooLowException::GradeTooLowException()
{
}

GradeTooLowException::GradeTooLowException( const GradeTooLowException & src )
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

GradeTooLowException::~GradeTooLowException()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

GradeTooLowException &				GradeTooLowException::operator=( GradeTooLowException const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, GradeTooLowException const & i )
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