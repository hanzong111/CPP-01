/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojing-ha <ojing-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 16:41:59 by ojing-ha          #+#    #+#             */
/*   Updated: 2023/03/10 22:14:46 by ojing-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

int	main(void)
{
	Harl	harl;
	
	harl.complain("DEBUG");
	harl.complain("INVALID");
	harl.complain("INFO");
	harl.complain("WARNING");
	harl.complain("ERROR");
	
	return (0);
}