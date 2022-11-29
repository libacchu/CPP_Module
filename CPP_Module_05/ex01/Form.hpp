/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 19:30:30 by libacchu          #+#    #+#             */
/*   Updated: 2022/11/21 13:46:46 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Form : public Bureaucrat::GradeTooHighException, public Bureaucrat::GradeTooLowException
{
    private:
        Form();
        const std::string	name;
        bool            	signitureStatus;
        const int       	gradeToSign;
        const int       	gradeToExecute;
    public:
		Form(const std::string name, int gradeToSign, int gradeToExecute);
        Form( const Form & copy);
        Form( const Form & copy);
        Form& operator=( const Form & rhs );
        ~Form();

		const std::string&	getName( void ) const;
		const bool&			getSignitureStatus( void ) const;
		const int			getGradeToSign( void ) const;
		const int			getGradeToExecute( void ) const;
		
		bool				signForm( Bureaucrat &bureaucrat );
};

std::ostream & operator<<(std::ostream & o, Form const & rhs);

#  endif