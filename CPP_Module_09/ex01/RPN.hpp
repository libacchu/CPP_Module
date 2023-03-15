/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 16:04:13 by libacchu          #+#    #+#             */
/*   Updated: 2023/03/15 14:17:16 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <string>
# include <stack>

class RPN
{
	private:
		std::stack<int> _st;

	public:
		RPN();
		RPN(std::string input);
		RPN( RPN const & src );
		~RPN();
		RPN &		operator=( RPN const & rhs );

};

std::ostream &			operator<<( std::ostream & o, RPN const & i );

#endif
