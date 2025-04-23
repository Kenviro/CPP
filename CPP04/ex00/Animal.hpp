/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim- <ktintim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 09:30:40 by ktintim-          #+#    #+#             */
/*   Updated: 2025/04/23 14:29:43 by ktintim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal {

	protected:
	
		std::string type;

	public:

		Animal();
		Animal(const Animal& cpy);
		Animal& operator=(const Animal& src);
		virtual ~Animal();

		std::string	getType() const ;
		virtual void		makeSound() const;
};

#endif