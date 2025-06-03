/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoudman <tgoudman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 18:42:50 by nezumickey        #+#    #+#             */
/*   Updated: 2025/04/18 13:37:54 by tgoudman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <string>
#include <iostream>

//std::cout << s1 << " found at: " << i << '\n';
void	replaceAll(std::string content, std::string replace, const std::string& s1, const std::string& s2) 
{
	std::ofstream	outfile;
	std::size_t			i;

	i = 0;
	replace.append(".replace");
	outfile.open(replace.c_str());
	i = content.find(s1, i);
	while (i != std::string::npos)
	{
		content.erase(i, s1.length());
		content.insert(i, s2);
		i = content.find(s1, i + 1);
	}
	outfile << content;
	outfile.close();
}

int main(int argc, char** argv) 
{
	std::ifstream	file;
	std::string		content;
	char			c;

	if (argc != 4) 
	{
		std::cerr << "Usage: ./replace <filename> <s1> <s2>\n";
		return 1;
	}
	file.open(argv[1], std::ios::binary);
	if (file.fail())
	{
		std::cerr << "Error: Cannot open file" << std::endl;
		return 1;
	}
	while (file.get(c))
		content += c;
	replaceAll(content, argv[1], argv[2], argv[3]);
	return 0;
}
