/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojing-ha <ojing-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 23:35:34 by ojing-ha          #+#    #+#             */
/*   Updated: 2023/03/01 23:40:25 by ojing-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef WEAPON_HPP
#define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon
{
public:
			Weapon();
			Weapon(std::string weapon_type);
			~Weapon();
			void		set_type(std::string weapon_type);
			std::string	get_type(void);
private:
			std::string	type;
};

#endif
