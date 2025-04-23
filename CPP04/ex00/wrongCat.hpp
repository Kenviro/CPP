/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim- <ktintim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 14:28:24 by ktintim-          #+#    #+#             */
/*   Updated: 2025/04/23 15:21:52 by ktintim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "wrongAnimal.hpp"

class WrongCat : public WrongAnimal {

	public:

		WrongCat();
		WrongCat(const WrongCat& cpy);
		WrongCat& operator=(const WrongCat& src);
		~WrongCat();

		void	makeSound() const;
};

#endif