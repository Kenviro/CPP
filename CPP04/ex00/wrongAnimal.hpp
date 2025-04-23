/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim- <ktintim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 14:20:18 by ktintim-          #+#    #+#             */
/*   Updated: 2025/04/23 15:21:30 by ktintim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef WRONANIMAL_HPP
# define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal {

	protected:
	
		std::string type;

	public:

		WrongAnimal();
		WrongAnimal(const WrongAnimal& cpy);
		WrongAnimal& operator=(const WrongAnimal& src);
		virtual ~WrongAnimal();
	
		std::string	getType() const;
		void		makeSound() const;
};

#endif