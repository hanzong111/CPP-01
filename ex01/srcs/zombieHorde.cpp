/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojing-ha <ojing-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 22:04:30 by ojing-ha          #+#    #+#             */
/*   Updated: 2023/02/28 22:57:36 by ojing-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie			*first_zombie;

	if (N <= 0)
		return(NULL);
	first_zombie = new Zombie[N];
	while (N-- > 0)
		first_zombie[N].set_name(name);
	return (first_zombie);
}