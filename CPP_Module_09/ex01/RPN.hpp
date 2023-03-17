/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 16:04:13 by libacchu          #+#    #+#             */
/*   Updated: 2023/03/17 14:14:26 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <string>
# include <stack>
# include <iomanip>
# include <sstream>

class RPN
{
	private:
		std::stack<double> _st;
		RPN();

	public:
		RPN(std::string input);
		RPN( RPN const & src );
		~RPN();
		RPN &		operator=( RPN const & rhs );

};

double    to_double(std::string str);
std::string ft_trim_white_space(std::string &str);

#endif
