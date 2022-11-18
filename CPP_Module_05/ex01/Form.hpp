/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 19:30:30 by libacchu          #+#    #+#             */
/*   Updated: 2022/11/17 19:42:45 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>

class Form 
{
    private:
        std::string     name;
        bool            status;
        const int       required_to_sign;
        const int       required_to_execute;
    public:
        Form();
        Form( const Form & copy) ;
        Form& operator=( const Form & rhs );
        ~Form();
};

std::ostream & operater<<(std::ostream & o, Form const & rhs);

#  endif