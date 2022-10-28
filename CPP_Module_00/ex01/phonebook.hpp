/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 00:23:52 by libacchu          #+#    #+#             */
/*   Updated: 2022/10/28 08:34:22 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <iomanip>

#define DEFAULT "\033[0;39m"
#define B_RED "\033[1;31m"
#define GREEN "\033[32m"
#define BLACK "\033[30m"
#define GREY "\033[90m"
#define CYAN "\033[36m"
#define YELLOW "\033[33m"
#define B_BLUE "\033[1;94m"
#define MAGENTA "\033[35m"

class	Contacts
{
	private:
		int			index;
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		int			phone_number;
		std::string	darkest_secret;
		static int	nbr_of_contacts;
		
	public:
		void		set_first_name();
		void		set_last_name();
		void		set_nickname();
		void		set_phone_nbr();
		void		set_darkest_secret();
		std::string get_first_name();
		std::string get_last_name();
		std::string get_nickname();
		int			get_phone_nbr();
		std::string get_darkest_secret();
};

class	PhoneBook
{
	private:	
		Contacts	contact[8];
	public:
		void		print_contact_table();
};

void	add();
void	search();
#endif