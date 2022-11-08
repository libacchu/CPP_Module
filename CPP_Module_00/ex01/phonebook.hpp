/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 00:23:52 by libacchu          #+#    #+#             */
/*   Updated: 2022/11/04 09:50:30 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <stdlib.h>
# include "contact.hpp"

#define DEFAULT "\033[0;39m"
#define B_RED "\033[1;31m"
#define B_BLUE "\033[1;94m"
#define B_YELLOW "\033[1;33m"
#define GREEN "\033[32m"

class	PhoneBook
{
	private:	
		Contacts	contact[8];
	public:
		void		print_contact_table();
		void		display_contact();
		int			add_contact_to_dir();
		Contacts	add();
		void		search();
};

#endif