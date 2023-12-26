/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbacquet <cbacquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 19:18:36 by cbacquet          #+#    #+#             */
/*   Updated: 2023/12/26 19:54:40 by cbacquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include <iostream>
#include "Contact.hpp"

# define PROMPT_ONE "+---------------- Main Menu ----------------+"
# define PROMPT_TWO "What do you want to do ?\r\n"

class PhoneBook
{
	private:
			int	_numberOfContact;
			int	_break;
			Contact	_contacts[8];

			void	_printline(std::string str);
			std::string	_getInput(std::string const prompt);

	public:
			PhoneBook(void);
			~PhoneBook(void);
			int	addContact(void);
			int	showContact(void);
};

#endif