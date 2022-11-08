/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 20:22:52 by libacchu          #+#    #+#             */
/*   Updated: 2022/11/08 09:50:02 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void Harl::debug( void ) {
	std::cout << B_GREEN "[ DEBUG ]" DEFAULT << std::endl;
	std::cout << "I love having extra bacon for my " << \
	"7XL-double-cheese-triple-pickle-specialketchup burger. " << \
	"I really do!" << std::endl;
}

void Harl::info( void ) {
	std::cout << B_YELLOW "[ INFO ]" DEFAULT << " level:" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put " << \
	"enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning( void ) {
	std::cout << B_PINK "[ WARNING ]" DEFAULT << " level:" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for " << \
	"years whereas you started working here since last month." << std::endl;
}

void Harl::error( void ) {
	std::cout << B_RED "[ ERROR ]" DEFAULT << " level:" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::defaultCall( void ) {
	std::cout << B_GREY "[ Probably complaining about insignificant problems. ]" DEFAULT << std::endl;
}

void Harl::complain( std::string level ) {
	
	int value = 4;
	
	std::string levelCall[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void(Harl::*func_ptr[5])(void) = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error, &Harl::defaultCall };

	for(int i = 0; i < 4; i++) {
		if (level == levelCall[i]) {
			value = i;
			break ;
		}
	} 
	switch (value)
	{
		case 0: (this->*func_ptr[0])();
		std::cout << std::endl;
		case 1: (this->*func_ptr[1])();
		std::cout << std::endl;
		case 2: (this->*func_ptr[2])();
		std::cout << std::endl;
		case 3: (this->*func_ptr[3])();
		std::cout << std::endl;
			break;
		default: (this->*func_ptr[4])();
			break;
	}
}
