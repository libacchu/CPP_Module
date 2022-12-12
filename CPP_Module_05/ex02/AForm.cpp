#include "AForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AForm::AForm()
{
}

AForm::AForm( const AForm & src )
{
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
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, AForm const & i )
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