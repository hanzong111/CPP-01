/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojing-ha <ojing-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 23:40:36 by ojing-ha          #+#    #+#             */
/*   Updated: 2023/03/01 23:46:48 by ojing-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"

Weapon::Weapon(void)
{

}

Weapon::Weapon(std::string weapon_type)
{
	this->type = weapon_type;
}

Weapon::~Weapon(void)
{

}

void	Weapon::set_type(std::string weapon_type)
{
	this->type = weapon_type;
}

std::string	Weapon::get_type(void)
{
	std::string	&ref = this->type;

	return (ref);
}