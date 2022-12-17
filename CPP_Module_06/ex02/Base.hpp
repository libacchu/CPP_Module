#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include <string>

# define DEFAULT "\033[0;39m"
# define B_RED "\033[1;31m"
# define B_BLUE "\033[1;94m"
# define B_YELLOW "\033[1;33m"
# define B_GREEN "\033[1;32m"
# define B_PINK "\033[1;35m"

class Base
{
	public:
		virtual ~Base( void );
};

#endif