/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 14:35:15 by libacchu          #+#    #+#             */
/*   Updated: 2022/11/17 16:28:13 by libacchu         ###   ########.fr       */
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


#endif