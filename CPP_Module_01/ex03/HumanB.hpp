/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:11:19 by libacchu          #+#    #+#             */
/*   Updated: 2022/11/07 13:03:52 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	private:
		std::string	name;
		Weapon*		HmanWeapon;
	public:
		HumanB(std::string	name);
		~HumanB();
		void setWeapon(Weapon& WeaponType);
		void attack();
};

#endif
