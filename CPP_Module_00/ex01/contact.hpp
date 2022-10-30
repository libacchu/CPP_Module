/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 00:23:52 by libacchu          #+#    #+#             */
/*   Updated: 2022/10/30 09:19:38 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include "phonebook.hpp"

class	Contacts
{
	private:
		int			index;
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		int			phone_number;
		std::string	darkest_secret;
		static int	_nbrInst;
		
	public:
		Contacts(void);
		~Contacts(void);
		void		set_index();
		void		set_first_name();
		void		set_last_name();
		void		set_nickname();
		void		set_phone_nbr();
		void		set_darkest_secret();
		int			get_index();
		std::string get_first_name();
		std::string get_last_name();
		std::string get_nickname();
		int			get_phone_nbr();
		std::string get_darkest_secret();
		int			get_nbrInst();
};

#endif