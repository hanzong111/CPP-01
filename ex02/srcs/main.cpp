/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojing-ha <ojing-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 01:31:34 by ojing-ha          #+#    #+#             */
/*   Updated: 2023/03/01 23:31:23 by ojing-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include <iostream>
# include <iomanip>
# include <string>

int main()
{
	std::string		string;
	std::string		*stringPTR;
	std::string		&stringREF = string;

	string = "HI THIS IS BRAIN";
	stringPTR = &string;

	std::cout << "Memory address of string    : "<< &string << std::endl;
	std::cout << "Memory address of stringPTR : "<< stringPTR << std::endl;
	std::cout << "Memory address of stringREF : "<< &stringREF << std::endl;
	std::cout << "Value of string    : "<< string << std::endl;
	std::cout << "Value of stringPTR : " << *stringPTR << std::endl;
	std::cout << "Value of stringREF : " << stringREF << std::endl;
	return (0);
}