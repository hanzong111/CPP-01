/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojing-ha <ojing-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 01:18:44 by ojing-ha          #+#    #+#             */
/*   Updated: 2023/02/26 21:17:51 by ojing-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

# include <iostream>
# include <iomanip>
# include <string>

class	Zombie
{
	public :
				Zombie();
				virtual		~Zombie();
				void		announce();
				void		set_name(std::string name);
				std::string	get_name();


	private :
				std::string	name;
};
#endif 