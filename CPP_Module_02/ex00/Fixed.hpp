/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 18:31:22 by libacchu          #+#    #+#             */
/*   Updated: 2022/11/07 08:29:52 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		int					fpValue;
		static const int	fractBits;
	public:
		Fixed();
		Fixed(const Fixed& copy);
		Fixed& operator=(Fixed const & rhs);
		~Fixed();

		int 	getRawBits ( void ) const;
		void	setRawBits( int const raw );
};


#endif