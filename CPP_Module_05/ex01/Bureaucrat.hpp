/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 14:35:15 by libacchu          #+#    #+#             */
/*   Updated: 2022/11/18 12:40:57 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

#define DEFAULT "\033[0;39m"
#define B_RED "\033[1;31m"
#define B_BLUE "\033[1;94m"
#define B_YELLOW "\033[1;33m"
#define B_GREEN "\033[1;32m"
#define B_PINK "\033[1;35m"

class Bureaucrat
{
	private:
		std::string			name;
		int					grade;
		const static int	minGrade = 150;
		Bureaucrat();
	public:
		Bureaucrat(std::string name, int grade);
		Bureaucrat( const Bureaucrat & copy );
		Bureaucrat& operator=( const Bureaucrat & rhs );
		~Bureaucrat();
		
		class GradeTooHighException : public std::exception {
			virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception {
			virtual const char* what() const throw();
		};
		
		const std::string&	getName( void ) const;
		int					getGrade( void ) const;

		void			incrementGrade( void );
		void			decrementGrade( void );
};

std::ostream & operator<<( std::ostream & o, Bureaucrat const & rhs);
#endif