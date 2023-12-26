/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbacquet <cbacquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 18:20:29 by cbacquet          #+#    #+#             */
/*   Updated: 2023/12/26 19:04:04 by cbacquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

void	trim_while_spaces(std::string &str)
{
	str.erase(0, str.find_first_not_of(' '));
	str.erase(str.find_last_not_of(' ') + 1);
}
std::string	getInput(void)
{
	std::string input;

	if (!std::getline(std::cin, input) || std::cin.eof())
	{
		std::cout << "Exit" << std::endl;
		return ("EXIT");
	}
	trim_while_spaces(input);
	return (input);
}

int main(void)
{
	PhoneBook	book;
	std::string	input;
	
	while(1)
	{
		std::cout << std::endl << PROMPT_ONE << std::endl << PROMPT_TWO;
		input = getInput();
		if (input == "ADD")
			book.addContact();
		if (input == "SEARCH")
			book.showContact();
		if (input == "EXIT")
			return (0);
	}
	return (0);
}
