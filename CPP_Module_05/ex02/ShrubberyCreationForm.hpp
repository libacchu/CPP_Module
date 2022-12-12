#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <string>
# include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	private:
		const std::string	_target;
		ShrubberyCreationForm( void );
	public:
		ShrubberyCreationForm( std::string target );
		ShrubberyCreationForm( ShrubberyCreationForm const & src );
		ShrubberyCreationForm&	operator=( ShrubberyCreationForm const & rhs );
		~ShrubberyCreationForm( void );

		const std::string&	getTarget( void ) const;
		virtual void		execute( Bureaucrat const & executor ) const;
};

std::ostream &			operator<<( std::ostream & o, ShrubberyCreationForm const & i );

#endif
