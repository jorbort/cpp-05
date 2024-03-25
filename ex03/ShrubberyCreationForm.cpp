#include "ShrubberyCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Shruberry creation form", 145,137), target(target)
{

}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src ) : AForm(src), target(src.target)
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ShrubberyCreationForm &ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
{
	this->target = rhs.target;
	return *this;
}

std::ostream &operator<<( std::ostream & o, ShrubberyCreationForm const & i )
{
	o << "Form  " << i.getName() << " sign grade " << i.getSignGrade() << " execution grade is" << i.getExecGrade() << " targets " << i.getTarget();
	o << " the form " << (i.getSignature() ? "is signed" : "is not signed") << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void ShrubberyCreationForm::_execute(Bureaucrat const &executor) const
{
	(void)executor;
	std::ofstream file;
	file.open((this->target + "_shruberry").c_str());
	file << "                                    # #### ####\n\
                                ### \\/#|### |/####\n\
                               ##\\/#/ \\||/##/_/##/_#\n\
                             ###  \\/###|/ \\/ # ###\n\
                           ##_\\_#\\_\\## | #/###_/_####\n\
                          ## #### # \\ #| /  #### ##/##\n\
                           __#_--###`  |{,###---###-~\n\
                                     \\ }{\n\
                                      }}{\n\
                                      }}{\n";
	file.close();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string  ShrubberyCreationForm::getTarget() const
{
	return (this->target);
}

/* ************************************************************************** */