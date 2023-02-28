/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojing-ha <ojing-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 01:31:34 by ojing-ha          #+#    #+#             */
/*   Updated: 2023/02/28 23:58:45 by ojing-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name);

int main()
{
	Zombie *horde;

	horde = zombieHorde(100, "hanz");
	for (int i = 0; i < 100; i++)
			horde[i].announce();
	delete[] horde;
	return (0);
}