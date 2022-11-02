/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 00:23:52 by libacchu          #+#    #+#             */
/*   Updated: 2022/11/02 11:09:24 by libacchu         ###   ########.fr       */
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
		std::string	phone_number;
		std::string	darkest_secret;
		static int	_nbrInst;
		static int	_nbrOfContacts;
		
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
		std::string	get_phone_nbr();
		std::string get_darkest_secret();
		int			get_nbrInst();
		int			get_nbrOfContacts();
		void		print_contacts();
};

#endif