/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim- <ktintim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 15:44:35 by ktintim-          #+#    #+#             */
/*   Updated: 2025/04/04 15:55:33 by ktintim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact {
	private:
		std::string First_name;
		std::string Last_name;
		std::string Nickname;
		std::string Phone_Number;
		std::string Darkest_Secret;

	public:
		std::string	get_Fname();
		std::string	get_Lname();
		std::string	get_Nickname();
		std::string	get_PhoneNumber();
		std::string	get_DSecret();
		void	set_Fname(std::string str);
		void	set_Lname(std::string str);
		void	set_Nickname(std::string str);
		void	set_PhoneNumber(std::string str);
		void	set_DSecret(std::string str);
};

#endif