/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojing-ha <ojing-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 00:14:43 by ojing-ha          #+#    #+#             */
/*   Updated: 2023/03/04 16:28:06 by ojing-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	set_name(name);
	this->weapon_on_hand = NULL;

}

HumanB::~HumanB(void)
{

}

void	HumanB::set_name(std::string name)
{
	this->name = name;
}

void	HumanB::attack(void)
{
	if (this->weapon_on_hand != NULL)
		std::cout << this->name << " attacks with their " << this->weapon_on_hand->get_type() << std::endl;
	else
		std::cout << this->name << " does not have a weapon " << std::endl;
}

void	HumanB::set_weapon(Weapon &weapon_name)
{
	this->weapon_on_hand = &weapon_name;
}