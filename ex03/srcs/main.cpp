/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojing-ha <ojing-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 01:31:34 by ojing-ha          #+#    #+#             */
/*   Updated: 2023/03/02 00:30:54 by ojing-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "HumanA.hpp"
# include "HumanB.hpp"

int main()
{
	Weapon	club = Weapon("crude spiked club");

	HumanA	bob("Bob", club);
	bob.attack();
	club.set_type("Minecraft sword");
	bob.attack();
	club.set_type("crude spiked club");

	HumanB	jim("Jim");
	jim.attack();
	jim.set_weapon(club);
	jim.attack();
	club.set_type("wodden sword");
	jim.attack();
	return (0);
}