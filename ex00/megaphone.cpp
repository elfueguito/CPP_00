/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbacquet <cbacquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 15:35:56 by cbacquet          #+#    #+#             */
/*   Updated: 2023/11/27 16:19:29 by cbacquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
	std::string const msg = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	if (argc == 1)
		std::cout << msg;
	for (int i = 1; i < argc; i++)
	{
		std::string s(argv[i]);
		for (std::string::iterator it = s.begin(); it != s.end(); it++)
			*it = std::toupper(*it);
		std::cout << s;
	}
	std::cout << std::endl;
	return (0);
}
