/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 19:30:30 by libacchu          #+#    #+#             */
/*   Updated: 2023/01/07 17:38:34 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
    private:
        const std::string	_name;
        bool            	_signitureStatus;
        const int       	_gradeToSign;
        const int       	_gradeToExecute;
		static const int	_minGrade = 150;
		bool				checkGradeError( int grade);
        Form( void );
    public:
		Form( const std::string name, int gradeToSign, int gradeToExecute );
        Form( const Form & copy);
        Form& operator=( const Form & rhs );
        ~Form();

		const std::string&	getName( void ) const;
		const bool&			getSignitureStatus( void ) const;
		const int&			getGradeToSign( void ) const;
		const int&			getGradeToExecute( void ) const;
		
		bool				beSigned( Bureaucrat &bureaucrat );

		class GradeTooHighException : public std::exception {
			virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception {
			virtual const char* what() const throw();
		};
};

std::ostream & operator<<(std::ostream & o, Form const & rhs);

#  endif
