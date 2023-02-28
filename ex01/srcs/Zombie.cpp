/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojing-ha <ojing-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 01:26:17 by ojing-ha          #+#    #+#             */
/*   Updated: 2023/02/26 21:30:00 by ojing-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << "New Zombie Spawned" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << name << " died" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << get_name() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string	Zombie::get_name(void)
{
	return(this->name);
}
void	Zombie::set_name(std::string name)
{
	this->name = name;
	std::cout << "Zombie name set to : " << name << std::endl;
}
