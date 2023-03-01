/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojing-ha <ojing-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 23:47:20 by ojing-ha          #+#    #+#             */
/*   Updated: 2023/03/02 00:25:34 by ojing-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class	HumanA
{
	public:
				HumanA(std::string name, Weapon &weapon);
				~HumanA(void);
				void	attack(void);
				void	set_name(std::string name);
	private:
				std::string	name;
				Weapon		&weapon_on_hand; 

};
#endif