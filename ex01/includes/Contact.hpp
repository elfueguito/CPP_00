/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbacquet <cbacquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 19:19:16 by cbacquet          #+#    #+#             */
/*   Updated: 2023/12/26 19:28:09 by cbacquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

#include <iostream>

class Contact 
{

private:
	std::string _firstName;
	std::string _lastName;
	std::string _nickName;
	std::string _phoneNumber;
	std::string _darkestSecret;

	int	_containsOnly_Alpha(std::string const input) const;
	int	_containsOnly_Digit(std::string const input) const;

public:
	
	Contact();
	~Contact();

	std::string const getFirstName(void) const;
	std::string const getLastName(void) const;
	std::string const getNickName(void) const;
	std::string const getPhoneNumber(void) const;
	std::string const getSecret(void) const;

	int	setFirstName(std::string name);
	int	setLastName(std::string lastname);
	int	setNickName(std::string nickname);
	int	setPhoneNumber(std::string number);
	int	setSecret(std::string secret);

	void	printContact(void) const;

};

#endif