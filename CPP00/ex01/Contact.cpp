/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim- <ktintim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 11:26:12 by ktintim-          #+#    #+#             */
/*   Updated: 2025/04/04 15:45:26 by ktintim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string	Contact::get_Fname()
{
	return (First_name);
}

std::string	Contact::get_Lname()
{
	return (Last_name);
}

std::string	Contact::get_Nickname()
{
	return (Nickname);
}

std::string	Contact::get_PhoneNumber()
{
	return (Phone_Number);
}

std::string	Contact::get_DSecret()
{
	return (Darkest_Secret);
}

void	Contact::set_Fname(std::string str)
{
	First_name = str;
}

void	Contact::set_Lname(std::string str)
{
	Last_name = str;
}

void	Contact::set_Nickname(std::string str)
{
	Nickname = str;
}

void	Contact::set_PhoneNumber(std::string str)
{
	Phone_Number = str;
}

void	Contact::set_DSecret(std::string str)
{
	Darkest_Secret = str;
}
