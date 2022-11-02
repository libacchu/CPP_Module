/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:11:13 by libacchu          #+#    #+#             */
/*   Updated: 2022/11/02 18:26:01 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	private:
		Weapon&		HmanWeapon;
		std::string	name;
	public:
		HumanA(std::string	name, Weapon& Weapon);
		~HumanA();
		void attack();
};

#endif
