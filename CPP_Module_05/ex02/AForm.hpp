/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 19:30:30 by libacchu          #+#    #+#             */
/*   Updated: 2023/01/04 14:29:47 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    private:
        AForm( void );
        const std::string	_name;
        bool            	_signitureStatus;
        const int       	_gradeToSign;
        const int       	_gradeToExecute;
		static const int	_minGrade = 150;
    public:
		AForm( const std::string name, int gradeToSign, int gradeToExecute );
        AForm( const AForm & copy);
        AForm& operator=( const AForm & rhs );
        virtual ~AForm( void );

		const std::string&	getName( void ) const;
		const bool&			getSignitureStatus( void ) const;
		const int&			getGradeToSign( void ) const;
		const int&			getGradeToExecute( void ) const;
		
		bool				signForm( Bureaucrat &bureaucrat );
		bool				execute( Bureaucrat const & executor ) const;
		virtual void		runExecute( void ) const = 0;
		bool				checkGradeError( int grade, int check ) const;
		bool				checkExecution( int grade, int check, bool status ) const;


		class GradeTooHighException : public std::exception {
			virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception {
			virtual const char* what() const throw();
		};

		class CannotBeExecuted : public std::exception {
			virtual const char* what() const throw();
		};
};

std::ostream & operator<<(std::ostream & o, AForm const & rhs);

#  endif
