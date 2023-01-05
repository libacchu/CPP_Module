#ifndef SCALARTYPES_HPP
# define SCALARTYPES_HPP

# include <iostream>
# include <string>
# include <stdlib.h>
# include <bits/stdc++.h>

# define DEFAULT "\033[0;39m"
# define B_RED "\033[1;31m"
# define B_BLUE "\033[1;94m"
# define B_YELLOW "\033[1;33m"
# define B_GREEN "\033[1;32m"
# define B_PINK "\033[1;35m"

class ScalarTypes
{
	private:
		const std::string _input;
		double	_double;
		bool	_valid;

		ScalarTypes( void );
	public:
		ScalarTypes( const std::string input );
		ScalarTypes( ScalarTypes const & src );
		ScalarTypes &	operator=( ScalarTypes const & rhs );
		~ScalarTypes( void );
		
		void	toChar( void );
		void	toInt( void );
		void	toFloat( void );
		void	toDouble( void);

		class WrongInput : public std::exception {
			virtual const char* what() const throw();
		};

};


std::ostream &			operator<<( std::ostream & o, ScalarTypes const & rhs );

#endif