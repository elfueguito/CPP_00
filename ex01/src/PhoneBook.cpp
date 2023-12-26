/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbacquet <cbacquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 19:07:08 by cbacquet          #+#    #+#             */
/*   Updated: 2023/12/26 19:53:44 by cbacquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PhoneBook.hpp"
#include <iomanip>
#include <string>
#include <iostream>

PhoneBook::PhoneBook(void) : 
	_numberOfContact(-1),
	_break(0)
{
		return;
}

PhoneBook::~PhoneBook(void)
{
	return;
}

std::string PhoneBook::_getInput(std::string const prompt)
{
	std::string input;

	std::cout << prompt;
	if (!std::getline(std::cin, input) || std::cin.eof())
	{
		_break = 1;
		return (std::string());
	}
	return (input);
}

int	PhoneBook::addContact(void)
{
	std::string	input;

	_numberOfContact++;
	if (_numberOfContact > 7)
		_numberOfContact = 0;
	while(!_break) {
		input = _getInput("First Name : ");
		if (_break || _contacts[_numberOfContact].setFirstName(input))
			break;
	}
	while(!_break) {
		input = _getInput("Last Name : ");
		if (_break || _contacts[_numberOfContact].setLastName(input))
			break;
	}
	while(!_break) {
		input = _getInput("Nick Name : ");
		if (_break || _contacts[_numberOfContact].setNickName(input))
			break;
	}
	while(!_break) {
		input = _getInput("Phone Number : ");
		if (_break || _contacts[_numberOfContact].setPhoneNumber(input))
			break;
	}
	while(!_break) {
		input = _getInput("Darkest secret : ");
		if (_break || _contacts[_numberOfContact].setSecret(input))
			break;
	}
	return (1);
}


int PhoneBook::showContact(void)
{
	std::string	inputIndex;
	int	index;

	if (this->_numberOfContact == -1)
	{
		std::cout << "No contact to display" << std::endl;
		return (0);
	}
	std::cout << "+----------+----------+----------+----------+" << std::endl
			  << "|   INDEX  |FIRST NAME| LAST NAME| NICKNAME |" << std::endl
			  << "+----------+----------+----------+----------+" << std::endl;
	
	for (int i =  0; i < 8; i++){
		if (this->_contacts[i].getFirstName(). empty())
			break;
		std::cout << '|' << std::setw(10) << i << "|";
		_printline(this->_contacts[i].getFirstName());
		_printline(this->_contacts[i].getLastName());
		_printline(this->_contacts[i].getNickName());
		std::cout << std::endl << "+----------+----------+----------+----------+" << std::endl;
	}
	inputIndex = _getInput("Enter the index of the contact you want to display : ");
	if (!inputIndex.empty()){
		if (inputIndex.length() == 1 && isdigit(inputIndex[0]))
		{
			index = (inputIndex[0] - '0');
			if (index > this->_numberOfContact)
			{
				std::cout << "Error: no contact for this index" << std::endl;
				return (0);
			}
		}
		else
		{
			std::cout << "Error: index should be between 0 & 7" << std::endl;
			return (0);
		}
		this->_contacts[index].printContact();
	}
	return (1);
}

void PhoneBook::_printline(std::string str)
{
	if (str.length() > 10) {
		str.resize(9);
		str += ".";
	}
	std::cout << std::setw(10) << str << '|';
}
