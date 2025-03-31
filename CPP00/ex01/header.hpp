/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim- <ktintim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 18:49:26 by kilian            #+#    #+#             */
/*   Updated: 2025/03/31 16:33:45 by ktintim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_HPP
# define HEADER_HPP

#include <iostream>
#include <string>
#include <cstdlib> 

class contact {
public:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
};

class phonebook {
public:
	contact	contacts[8];
	int 	contact_count;
	int		full;
};


void	print_first_name(phonebook phonebook, int index);
void	print_last_name(phonebook phonebook, int index);
void	print_nickname(phonebook phonebook, int index);
int		input_error(phonebook phonebook, int index);

#endif