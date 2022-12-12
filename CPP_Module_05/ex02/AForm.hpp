#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <string>

class AForm
{

	public:

		AForm();
		AForm( AForm const & src );
		~AForm();

		AForm &		operator=( AForm const & rhs );

	private:

};

std::ostream &			operator<<( std::ostream & o, AForm const & i );

#endif /* *********************************************************** AFORM_H */