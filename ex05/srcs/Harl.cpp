/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojing-ha <ojing-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 01:20:20 by ojing-ha          #+#    #+#             */
/*   Updated: 2023/03/08 02:14:36 by ojing-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

Harl::Harl(void)
{

}

Harl::~Harl(void)
{

}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-\
pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You \
didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!";
	std::cout << std::endl;
}

void	Harl::warning(void)
{
	std::cout <<  "I think I deserve to have some extra bacon for free. I’ve \
been coming for years whereas you started working here since last month.";
	std::cout << std::endl;
}

void	Harl::error(void)
{
	std::cout <<  "This is unacceptable! I want to speak to the manager now.";
	std::cout << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string	level_list[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void	(Harl::*function_list[4])(void)
		= {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	void	(Harl::*selected)(void) = NULL;

	for(int i = 0; i < 4; i++)
	{
		if (level == level_list[i])
		{
			selected = function_list[i];
			break ;
		}
	}
	if (selected != NULL)
		(this->*selected)();
}