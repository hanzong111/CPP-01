/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojing-ha <ojing-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 23:55:28 by ojing-ha          #+#    #+#             */
/*   Updated: 2023/03/02 00:25:33 by ojing-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon_name) : weapon_on_hand(weapon_name)
{
	set_name(name);
}

HumanA::~HumanA(void)
{

}

void	HumanA::set_name(std::string name)
{
	this->name = name;
}

void	HumanA::attack(void)
{
	std::cout << this->name << " attacks with their " << this->weapon_on_hand.get_type() << std::endl;
}