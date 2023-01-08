#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <string>
# include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	private:
		const std::string	_target;
		RobotomyRequestForm( void );
	public:
		RobotomyRequestForm( std::string target );
		RobotomyRequestForm( RobotomyRequestForm const & src );
		RobotomyRequestForm &	operator=( RobotomyRequestForm const & rhs );
		~RobotomyRequestForm( void );

		const std::string&	getTarget( void ) const;
		virtual bool		execute( Bureaucrat const & executor ) const;
};

#endif
