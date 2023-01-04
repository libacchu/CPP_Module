#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <string>
# include <fstream>
# include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	private:
		const std::string	_target;
		ShrubberyCreationForm( void );
	public:
		void	printAsciiTree( void ) const;
		ShrubberyCreationForm( std::string target );
		ShrubberyCreationForm( ShrubberyCreationForm const & src );
		ShrubberyCreationForm&	operator=( ShrubberyCreationForm const & rhs );
		~ShrubberyCreationForm( void );

		const std::string&	getTarget( void ) const;
		virtual void		runExecute( void ) const;
};

#endif
