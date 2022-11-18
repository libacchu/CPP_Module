/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 14:35:15 by libacchu          #+#    #+#             */
/*   Updated: 2022/11/17 19:44:06 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

class Bureaucrat
{
	private:
		std::string	name;
		int			grade;
	public:
		Bureaucrat();
		Bureaucrat( const Bureaucrat & copy );
		Bureaucrat& operator=( const Bureaucrat & rhs );
		~Bureaucrat();
		
		const std::string&	getName( void ) const;
		int&			getGrade( void ) const;

		void			setName( std::string name );
		void			setGrade( int grade );
};

std::ostream & operator<<( std::ostream & o, Bureaucrat const & rhs);
#endif