#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <string>
# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private:
		const std::string	_target;
		PresidentialPardonForm( void );
	public:
		PresidentialPardonForm( std::string	target );
		PresidentialPardonForm( PresidentialPardonForm const & src );
		PresidentialPardonForm &	operator=( PresidentialPardonForm const & rhs );
		~PresidentialPardonForm( void );

		const std::string&	getTarget( void ) const;
		virtual void		execute( Bureaucrat const & executor ) const;
};

std::ostream &			operator<<( std::ostream & o, PresidentialPardonForm const& rhs );

#endif
