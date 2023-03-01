/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojing-ha <ojing-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 23:50:11 by ojing-ha          #+#    #+#             */
/*   Updated: 2023/03/02 00:28:15 by ojing-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class	HumanB
{
	public:
				HumanB(std::string name);
				~HumanB(void);
				void	attack(void);
				void	set_name(std::string name);
				void	set_weapon(Weapon &weapon_name);
	private:
				std::string	name;
				Weapon		*weapon_on_hand;  

};
#endif