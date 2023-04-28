/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojing-ha <ojing-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 16:41:59 by ojing-ha          #+#    #+#             */
/*   Updated: 2023/04/28 15:17:11 by ojing-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void	ft_replace(std::string name, std::string find, std::string replace)
{
	std::ifstream			infile(name);
	std::ofstream			outfile(name + ".replace");
	std::string				buff;
	std::string::size_type	index;
	int						state;

	if(!outfile)
	{
		std::cerr << name + ".replace cannot be created" << std::endl;
		return ;
	}
	if(!infile)
	{
		remove((name + ".replace").c_str());
		std::cerr << name + " cannot be opened" << std::endl;
		return ;
	}
	while (1)
	{
		state = std::getline(infile, buff).eof();
		index = buff.find(find);
		while (index != std::string::npos)
		{
			buff.erase(index, find.length());
			buff.insert(index, replace);
			index += replace.length();
			index = buff.find(find, index);
		}
		outfile << buff;
		if (state)
			break ;
		outfile << std::endl;
	}
	return ;
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Please follow the following format :" << std::endl;
		std::cout << "./sed [file_to_open] [str_find] [str_replace]" << std::endl;
		return (0);
	}
	ft_replace(argv[1], argv[2], argv[3]);
	return (0);
}