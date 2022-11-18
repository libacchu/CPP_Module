/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 19:45:04 by libacchu          #+#    #+#             */
/*   Updated: 2022/11/17 19:52:03 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() {}

Form::Form( const Form & copy) {
    *this = copy;
    return (*this);
}

Form& Form::operator=( const Form & rhs ) {
    this->name = rhs.name;
    this->status = rhs.status;


    return(*this);
}

Form::~Form() {}

std::ostream & operator<<( std::ostream & o, Form const & rhs) {
    o << 
}