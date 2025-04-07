/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim- <ktintim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 15:44:06 by ktintim-          #+#    #+#             */
/*   Updated: 2025/04/07 11:12:51 by ktintim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "header.hpp"
#include "Contact.hpp"

class Phonebook {
	private :
		Contact book[8];
		int		Contact_added;
		bool	is_full;

	public:
		Phonebook();
		int			get_ContactAdded();
		int			get_isfull();
		void		this_is_full();
		void		add_Contact();
		void		SEARCH();
		void		print_Fname(int index);
		void		print_Lname(int index);
		void		print_Nickname(int index);
		void		print_contact(int index);
		void		ADD();
		std::string	add_Fname();
		std::string	add_Lname();
		std::string	add_Nickname();
		std::string	add_Phone_number();
		std::string	add_Dsecret();
};

#endif