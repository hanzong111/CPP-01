/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojing-ha <ojing-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 01:17:04 by ojing-ha          #+#    #+#             */
/*   Updated: 2023/03/08 01:20:16 by ojing-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

class Harl
{
	public	:
				Harl(void);
				~Harl(void);
				void	complain(std::string level);
	private	:
				void	debug(void);
				void	info(void);
				void	warning(void);
				void	error(void);
};
#endif