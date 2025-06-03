/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoudman <tgoudman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 15:44:39 by tgoudman          #+#    #+#             */
/*   Updated: 2025/04/11 11:34:25 by tgoudman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class megaphone
{
	private:
	
	public:
	megaphone();
	std::string ft_upper(std::string str);
	~megaphone();
};

megaphone::megaphone()
{
	std::cout << "Constructor called" << std::endl;
}

std::string megaphone::ft_upper(std::string str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		++i;
	}
	return (str);
}

megaphone::~megaphone()
{
	std::cout << "Destructor called" << std::endl;
}


int main(int argc, char *argv[])
{
	megaphone megaphone;
	int	i;

	i = 0;
	if (argc == 1)
	{
		std::cout << "LOUD AND UNBEARABLE FEEDBACK NOISE";
	}
	else
	{
		while (argv[++i])
			std::cout << megaphone.ft_upper(argv[i]);
	}
	std::cout << std::endl;
	return 0;
}
