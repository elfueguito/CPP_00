/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbacquet <cbacquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 18:14:15 by cbacquet          #+#    #+#             */
/*   Updated: 2023/12/26 19:33:41 by cbacquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iomanip>

Contact::Contact(void) : 
	_firstName(""),
	_nickName(""),
	_phoneNumber(""),
	_darkestSecret("") 
{
		return;
}

Contact::~Contact(void){
	return;
}

//getters
std::string const Contact::getFirstName(void) const{
	return (this->_firstName);
}

std::string const Contact::getLastName(void) const{
	return (this->_lastName);
}

std::string const Contact::getNickName(void) const{
	return (this->_nickName);
}

std::string const Contact::getPhoneNumber(void) const{
	return (this->_phoneNumber);
}
std::string const Contact::getSecret(void) const{
	return (this->_darkestSecret);
}

//setters
int	Contact::setFirstName(std::string name)
{
	if (name.empty())
		return (0);
	else if (!_containsOnly_Alpha(name)) {
		std::cout << "Error: FirstName should have only letters, '-' and spaces" << std::endl;
		return (0);
	}
	name[0] = std::toupper(name[0]);
	this->_firstName = name;
	return (1);
}

int	Contact::setLastName(std::string lastname)
{
	if (lastname.empty())
		return (0);
	else if (!_containsOnly_Alpha(lastname)) {
		std::cout << "Error: LastName should have only letters, '-' and spaces" << std::endl;
		return (0);
	}
	lastname[0] = std::toupper(lastname[0]);
	this->_lastName = lastname;
	return (1);
}

int	Contact::setNickName(std::string nickname)
{
	if (nickname.empty())
		return (0);
	else if (!_containsOnly_Alpha(nickname)) {
		std::cout << "Error: NickName should have only letters, '-' and spaces" << std::endl;
		return (0);
	}
	nickname[0] = std::toupper(nickname[0]);
	this->_nickName = nickname;
	return (1);
}

int	Contact::setPhoneNumber(std::string number)
{
	if (number.empty())
		return (0);
	else if (!_containsOnly_Digit(number)) {
		std::cout << "Error: Number should have only digit" << std::endl;
		return (0);
	}
	this->_phoneNumber = number;
	return (1);
}

int	Contact::setSecret(std::string secret)
{
	if (secret.empty())
		return (0);
	this->_darkestSecret = secret;
	return (1);
}

int	Contact::_containsOnly_Alpha(std::string const input) const
{
	for (std::string::const_iterator it = input.begin(); it != input.end(); it++)
	{
		if (!std::isalpha(*it) && *it != ' ' && *it != '-')
			return (0);
	}
	return (1);
}

int	Contact::_containsOnly_Digit(std::string const input) const
{
	for (std::string::const_iterator it = input.begin(); it != input.end(); it++)
	{
		if (!std::isdigit(*it) && *it != ' ' && *it != '-')
			return (0);
	}
	return (1);
}

void	Contact::printContact(void) const
{
	std::cout << "First Name : " << this->_firstName << std::endl;
	std::cout << "Last Name : " << this->_lastName << std::endl;
	std::cout << "Nick Name : " << this->_nickName << std::endl;
	std::cout << "Phone Number : " << this->_phoneNumber << std::endl;
	std::cout << "Darkest Secret : " << this->_darkestSecret << std::endl;
}